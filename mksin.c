#include <stdio.h>
#include <math.h>
#include <stdint.h>

int
main(int argc, char *argv[])
{
	int i, n = 64;
	double theta;
	double inc = 2*M_PI/n;
	int16_t v;

	printf("const int sintbl[] = {\n");
	for(i=0, theta=0; i<n; theta+=inc, i++) {
		v = 256.0 * sin(theta);
		printf("    0x%04x,\n", (uint16_t)v);
	}
	printf("};\n");
	return 0;
}
