.PHONY: clean all

.PRECIOUS: *.o

NESLIB=/usr/local/cc65/share/cc65/lib/nes.lib
all: spaceout.nes

SRCS=spaceout.c starfield.c ftrig.c
OBJS=$(SRCS:.c=.o)
ASMS=$(SRCS:.c=.s)

clean:
	@rm -fv $(OBJS) $(ASMS) crt0.o spaceout.nes

crt0.o: crt0.s
	ca65 crt0.s

%.o: %.c
	cc65 -Oi $< --add-source
	ca65 $*.s

spaceout.nes: $(OBJS) crt0.o
	ld65 -C nes.cfg -o $@ crt0.o $(OBJS) $(NESLIB)

