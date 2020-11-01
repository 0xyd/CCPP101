#include <stdio.h>
#include <stdint.h>

#include "other.h"

static void call_another_static() {
	printf("Call a static function from other.c \n");
}

void call_another() {
	printf("Call a non-static function from other.c \n");
}

void call_bypass_static() {
	printf("bypass static \n");
	call_another_static();
	printf("bypass happily :D \n");
}