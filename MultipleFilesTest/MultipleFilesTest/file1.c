#include "file1.h"
#include <stdio.h>

void non_static_fun1() {
	printf("non static fun1\n");
}

static void static_fun1() {
	printf("static fun1\n");
}

void fun1() {
	printf("fun1\n");
}

void non_static_fun2() {
	printf("non static fun1\n");
	static_fun1();
}