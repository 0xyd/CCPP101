#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a+b;
} 

int main()
{
	int (*f1)(int, int) = &add;
	int (*f2)(int, int) = &add;

	if (f1 == f2) {
		cout << "Hello world" << endl;
		printf("Address of add function %p\n", f1);
		printf("Address of function pointer f1 %p\n", &f1);
		printf("Address of add function %p\n", f2);
		printf("Address of function pointer f2 %p\n", &f2);
	}

	return 0;
}