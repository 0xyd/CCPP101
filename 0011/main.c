#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	/* code */
	// case 1
	printf("CASE 1: \n");
	int i = 5;
	srand(i);
	for (int j = 0; j < 10; j++) printf("%d \n", rand());

	// case 2: Seed with time
	printf("CASE 2: \n");
	time_t t;
	srand((unsigned) time(&t));
	for (int j = 0; j < 10; j++) printf("%d \n", rand());

	// case 3:
	srand(time(NULL));
	printf("CASE 3: \n");
	for (int j = 0; j < 10; j++) printf("%d \n", rand());

	return 0;
}