#include <stdio.h>
#include <stdint.h>
#include "other.h"

static void call_static() 
{
	printf("Call static in main. \n");
}

int main()
{
		call_static();
		call_another();

		// We cannot call this function because it is only visible in other.c
		// call_another_static();

		call_bypass_static();
}