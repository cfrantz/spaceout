//////////////////////////////////////////////////////////////////////
// Spaceout: Breakout *in space*
//////////////////////////////////////////////////////////////////////
#include <stdio.h>

#include "starfield.h"
#include "neslib.h"
#include "chars.h"
#include "tiles.h"


//general purpose vars

unsigned char x, y, i,j,k;
unsigned char spr;
unsigned char framenum;
unsigned char col;
unsigned char xpos, ypos;
unsigned int vel;

unsigned char pad;
unsigned int ship_x, ship_y;

#define NTADR(x,y)	((0x2000|((y)<<5)|x))

#define MSB(x)		(((x)>>8))
#define LSB(x)		(((x)&0xff))

#define BALLS_MAX	1
#define ROWS_MAX 11
#define UPDATE_LENGTH 10

#define BORDER_BLOCK 0x80
#define BRICK_L 0x82
#define BRICK_R 0x83

//balls parameters
static unsigned int ball_x[BALLS_MAX];
static unsigned int ball_y[BALLS_MAX];
static unsigned int ball_dx[BALLS_MAX];
static unsigned int ball_dy[BALLS_MAX];

// bricks to be broken
static unsigned char bricks[16 * ROWS_MAX];

const unsigned char palette[32]={
	// Background palette
	0x0F,0x17,0x27,0x30,
	0x0F,0x11,0x21,0x30,
	0x0F,0x15,0x25,0x30,
	0x0F,0x19,0x29,0x30,

	// Sprite palette
	0x0F,0x00,0x10,0x20,
	0x0F,0x11,0x21,0x31,
	0x0F,0x02,0x11,0x20,
	0x0F,0x19,0x29,0x30,
};

// Ship metasprite with thruster animation
unsigned char ship_sprite[3][21] = { {
		// x pos, y pos, tile-id, palette
		0, 0, 0x84, 0,
		8, 0, 0x86, 0,
		16, 0, 0x85, 0,
		0, 6, 0x87, 1,
		15, 6, 0x87, 1,
		128,
	}, {
		// x pos, y pos, tile-id, palette
		0, 0, 0x84, 0,
		8, 0, 0x86, 0,
		16, 0, 0x85, 0,
		0, 7, 0x87, 1,
		15, 7, 0x87, 1,
		128,
	}, {
		// x pos, y pos, tile-id, palette
		0, 0, 0x84, 0,
		8, 0, 0x86, 0,
		16, 0, 0x85, 0,
		0, 8, 0x87, 1,
		15, 8, 0x87, 1,
		128,
	}
};

unsigned char update_list[UPDATE_LENGTH*3];
unsigned char uptr;

//////////////////////////////////////////////////////////////////////
// I hacked fceux to put whatever is written to memory location
// 0x4040 to stdout.  Hooray, now I can have printf style debugging
// in my program.
//////////////////////////////////////////////////////////////////////
#define xputc(ch) ( *(char*)0x4040 = ch )
void write(int fd, const char *buf, int len)
{
	while(len--) {
		xputc(*buf++);
	}
}

void playfield_init(unsigned char rows)
{
	vram_adr(0x2020);
	for(i=0; i<32; i++) {
		vram_put(BORDER_BLOCK);
	}
	vram_put(BORDER_BLOCK);
	for(i=0; i<30; i++) {
		vram_put(0);
	}
	vram_put(BORDER_BLOCK);

	for(j=0; j<26; j++) {
		vram_put(BORDER_BLOCK);
		for(i=0; i<15; i++) {
			if (j<rows) {
				vram_put(BRICK_L);
				vram_put(BRICK_R);
				bricks[16+16*j + i] = 1;
			} else {
				vram_put(0);
				vram_put(0);
			}
		}
		vram_put(BORDER_BLOCK);
	}

	vram_adr(0x23c0);
	for(j=0; j<16; j+=2) {
		col = j & 0x3;
		col |= ((j+1) & 0x3) << 4;
		col |= col << 2;
		for(i=0; i<8; i++) {
			vram_put(col);
		}
	}
}

void ship_update(void)
{
	unsigned char f = (framenum / 2) & 0x3;
	if (f==3) f = 1;
	vel = (pad & PAD_B) ? 0x200 : 0x180;
	if (pad & PAD_LEFT) {
		ship_x -= vel;
	} else if (pad & PAD_RIGHT) {
		ship_x += vel;
	}
	if (pad & PAD_UP) {
		ship_y -= vel;
	} else if (pad & PAD_DOWN) {
		ship_y += vel;
	}

	if (ship_x < (8<<8)) {
		ship_x = 8<<8;
	} else if (ship_x > (256-8-24)<<8) {
		ship_x = (256-8-24)<<8;
	}
	if (ship_y < (192<<8)) {
		ship_y = 192<<8;
	} else if (ship_y > (220<<8)) {
		ship_y = 220<<8;
	}

	spr = oam_meta_spr(ship_x>>8, ship_y>>8, spr, ship_sprite[f]);
}

void ball_init(unsigned char n)
{
	for(i=0; i<n; ++i) {
		ball_x[i]=128<<8;
		ball_y[i]=128<<8;

		// Set the initial velocity to 1.5pix/frame, down and to the right
		ball_dx[i] = 256+128;
		ball_dy[i] = 256+128;
	}
}

void ball_bounce_edge(unsigned char b)
{
	xpos = ball_x[b] >> 8;
	if (xpos+2 < 8) {
		ball_dx[b] = -ball_dx[b];
		ball_x[b] = (8-2)<<8;
	} else if (xpos+6 >= 248) {
		ball_dx[b] = -ball_dx[b];
		ball_x[b] = (248-6)<<8;
	}

	ypos = ball_y[b] >> 8;
	if (ypos+2 <= 16) {
		ball_dy[b] = -ball_dy[b];
		ball_y[b] = (16-2)<<8;
	} else if (ypos+6 >= 232) {
		ball_dy[b] = -ball_dy[b];
		ball_y[b] = (232-6)<<8;
	}
}

void dbricks(void)
{
	unsigned char z;
	for(z=0; z<sizeof(bricks); z++) {
		if ((z & 0xF) == 0) xputc('\n');
		xputc(0x30+bricks[z]);
	}
	xputc('\n');
}

void update_block(unsigned char x, unsigned char y, unsigned char v)
{
	update_list[uptr++] = MSB(NTADR(x, y));
	update_list[uptr++] = LSB(NTADR(x, y));
	update_list[uptr++] = v;
}

void ball_bounce_brick(unsigned char b)
{
	ypos = (ball_y[b] >> 8);
	if (ypos < 16 || ypos >= 8+8*ROWS_MAX) return;
	ypos = ypos - 16;
	xpos = (ball_x[b] >> 8);
	xpos = xpos - 8;

	j = (ypos+4)/8;
	if (bricks[16*j + (i=(xpos+1)/16)]) {
	    bricks[16*j + i] = 0;
#ifdef DEBUG
		dbricks();
		printf("1 clearing %d %d\n", i, j);
#endif
		ball_dx[b] = -ball_dx[b];
		i <<= 1;
		update_block(i+1, j+2, 0);
		update_block(i+2, j+2, 0);
	} else if (bricks[16*j + (i=(xpos+6)/16)]) {
	    bricks[16*j + i] = 0;
#ifdef DEBUG
		dbricks();
		printf("2 clearing %d %d\n", i, j);
#endif
		ball_dx[b] = -ball_dx[b];
		i <<= 1;
		update_block(i+1, j+2, 0);
		update_block(i+2, j+2, 0);
	}

	i = (xpos+4)/16;
	if (bricks[16*(j=(ypos+1)/8) + i]) {
	    bricks[16*j + i] = 0;
#ifdef DEBUG
		dbricks();
		printf("3 clearing %d %d\n", i, j);
#endif
		ball_dy[b] = -ball_dy[b];
		i <<= 1;
		update_block(i+1, j+2, 0);
		update_block(i+2, j+2, 0);
	} else if (bricks[16*(j=(ypos+6)/8) + i]) {
	    bricks[16*j + i] = 0;
#ifdef DEBUG
		dbricks();
		printf("4 clearing %d %d\n", i, j);
#endif
		ball_dy[b] = -ball_dy[b];
		i <<= 1;
		update_block(i+1, j+2, 0);
		update_block(i+2, j+2, 0);
	}
}

void ball_bounce_ship(unsigned char b)
{
	x = ship_x>>8;
	y = ship_y>>8;
	xpos = (ball_x[b] >> 8)+4;
	ypos = (ball_y[b] >> 8)+6;

	if (xpos>=x && xpos<x+24) {
		if (ypos>=y && ypos<y+2) {
			ball_dy[b] = -ball_dy[b];
		}
	}
}


void main(void)
{
	set_vram_update(UPDATE_LENGTH, update_list);
	playfield_init(6);
	dbricks();
	pal_all(palette);//set palette for sprites
	oam_size(0);
	ppu_on_all();//enable rendering

	//initialize parameters
	ship_x = (128-12)<<8;
	ship_y = 216<<8;	
	stars_init();
	ball_init(BALLS_MAX);

	//now the main loop
	printf("hello world\n");

	for(;;++framenum) {
		//wait for next TV frame
		ppu_waitnmi();
		pad = pad_poll(0);

		uptr = 0;
		spr = 0;
		ship_update();

		for(k=0;k<BALLS_MAX;++k) {
			//set a sprite for current ball
			spr = oam_spr(ball_x[k]>>8, ball_y[k]>>8, 0x81, 0, spr);

			//move the ball
			ball_x[k]+=ball_dx[k];
			ball_y[k]+=ball_dy[k];

			//bounce the ball off the edges
			ball_bounce_edge(k);
			ball_bounce_brick(k);
			ball_bounce_ship(k);
		}
		stars_update();
	}
}
