#include <stdio.h>
#include "file1.h"

int add(int a, int b) {
	return a + b;
}

typedef int (*fun_ptr)(int, int);

int main() {
	printf("hello world!\n");
	non_static_fun1();
	non_static_fun2();
	fun1();

	//int (*fun_ptr)(int, int) = add;
	fun_ptr ptr = add;

	printf("%d\n", ptr(1, 2));

	// static_fun1();

	return 0;
}