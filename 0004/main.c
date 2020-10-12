#include <stdarg.h>
#include <stdio.h>

int sum_va(int noused, int num_n, ...) {
	int val = 0;

	// ap represent the variables "..." which represents those with implicit declaration.
	va_list ap;

	va_start(ap, num_n);
	for (int i=0; i<num_n; i++) {
		val += va_arg(ap, int);
	}
	va_end(ap);
	return val;

}

int main() {

	printf("sum_va(100, 5, 1, 2, 3, 4, 5) = %d \n", sum_va(100, 5, 1, 2, 3, 4, 5));
	printf("The result shall be 15. \n");
	return 0;
}