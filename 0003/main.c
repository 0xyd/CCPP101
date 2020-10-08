#include <stdio.h>
#include <stdint.h>

int main()
{
	float a = 0.1;
	int b = a*10;
	printf("a: %f \n", a);
	printf("b = a*10; b = %d \n", b);
	printf("(int)a*10 = %d \n", (int)a*10);
}