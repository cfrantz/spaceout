#include "starfield.h"
#include "ftrig.h"
#include "neslib.h"

//general purpose vars
extern unsigned char i,j,k,x,y;
extern unsigned char spr;

//////////////////////////////////////////////////////////////////////
// Starfield:  Make it "In Space..."
//
// Clobbers globals i, j, x, y, spr
//////////////////////////////////////////////////////////////////////
#define STARS_MAX	8
#define STAR_PALETTE 2
#define STAR_SPRITE_START 0x88
#define STAR_SPRITE_N 4
#define STAR_CENTER_X 128
#define STAR_CENTER_Y 120
static unsigned int star_x[STARS_MAX];
static unsigned int star_y[STARS_MAX];
static unsigned char star_angle[STARS_MAX];
static unsigned char star_frame[STARS_MAX];

static int c, s;

void __fastcall__ stars_init(void)
{
	for(i=0;i<STARS_MAX;++i) {
		star_angle[i] = rand8() % 64;
		star_frame[i] = i*8;
		star_x[i] = (STAR_CENTER_X<<8) + fcos(i*8) * (i>>0);
		star_y[i] = (STAR_CENTER_Y<<8) + fsin(i*8) * (i>>0);
	}
}

void __fastcall__ stars_update(void)
{
	for(i=0;i<STARS_MAX;++i) {
		//set a sprite for current ball
		if (star_frame[i] == 0) {
			star_x[i] = STAR_CENTER_X<<8;
			star_y[i] = STAR_CENTER_Y<<8;
			star_angle[i] = rand8() % 64;
			star_frame[i] = 16+rand8() % 16;
		}
		++star_frame[i];
		s = fsin(star_angle[i]);
		c = fcos(star_angle[i]);
		k = star_frame[i]>>3;
		for(j=0; j<k; ++j) {
			star_y[i] += s;
			star_x[i] += c;
		}

//		star_x[i] += fcos(star_angle[i]) * (star_frame[i]>>3);
//		star_y[i] += fsin(star_angle[i]) * (star_frame[i]>>3);

		x = star_x[i] >> 8;
		y = star_y[i] >> 8;
		j = i & 7;
		if (j > STAR_SPRITE_N)
			j -= STAR_SPRITE_N;
		spr = oam_spr(x, y, 0x88+j, STAR_PALETTE, spr);

		if (x<8 || x>248 || y<8 || y>232) {
			star_frame[i] = 0;
		}
	}
}
