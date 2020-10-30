#include <stdio.h>
#include <stdint.h>

int main()
{
	int a = 1;
	int b = a << 0;
	int c = b << 1;
	int d = c >> 2;

	printf("a: 0x%08x \n", a);
	printf("b: 0x%08x \n", b);
	printf("c: 0x%08x \n", c);
	printf("d: 0x%08x \n", d);
	
}