#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int8_t a = 127;
	uint8_t b = 255;
	int8_t c = 0;
	uint8_t d = 0;

	printf("a : %d, b: %d \n", a, b);

	c = a*b;
	printf("c: %d \n", c);

	d = a*b;
	printf("d: %d \n", d);	

	return 0;
}