#include <stdio.h>
#include <stdint.h>

int main()
{
	int *p1;
	float *p2;
	double *p3;

	printf("size of integer pointer: %lu \n", sizeof(p1));
	printf("size of float pointer: %lu \n", sizeof(p2));
	printf("size of double pointer: %lu \n", sizeof(p3));

	int **pp1;
	printf("size of integer pointer: %lu \n", sizeof(pp1));
}