#include <stdio.h>
#include <stdint.h>

int main()
{
	// SECTION 1
	// Read a file with only one numeric value
	int number;
	FILE *f1 = fopen("data.txt", "r");

	while (fscanf(f1, "%d", &number) == 1) {
		printf("Read number in data.txt : %d \n", number);
	}
	fclose(f1);

	// SECTION 2
	char str[5];
	FILE *f2 = fopen("data-2.txt", "r");

	while (fscanf(f2, "%s %d", str, &number) != EOF) {
		printf("Line : %s %d \n", str, number);
	}
	fclose(f2);

	
}