#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;

typedef int arr_10[10];

int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

int arr3[3] = { 1, 2, 3 };

// 函数，返回值是指针，指针指向 10 个 int 的数组
int (*func())[10] {
    return &arr;
}

arr_10* func2() {
    return &arr;
}

int (*ptr_add)(int, int);

int* real_func() {
    int* arr = (int*)malloc(sizeof(int) * 10);
    return arr;
}

int add(int x, int y) {
    return x + y;
}

auto func3() -> int (*)[10] {
    return &arr;
}

decltype(&arr3) func4() {
    return &arr3;
}

int main() {
    // int* ptr = func();
    
    ptr_add = add;
    // func = real_func();

    int (*p)[10] = func2();

    int arr2[3] = { 1, 2, 3 };

    int (*p2)[3] = &arr2;

    int* p3 = arr;

    // for (int i = 0; i < 4; i++)
    // printf("0x%08x 0x%08x\n", &arr + 1, arr);
    printf("%d %d\n", &arr2 + 1, arr2);

    printf("%d\n", ptr_add(1, 3));

    for (int i = 0; i < 10; i++) {
        printf("[%d]", (*p)[i]);
    }

    int (*p4)[3] = func4();

    for (int i = 0; i < 3; i++) {
        printf("%d|", (*p4)[i]);
    }

    return 0;
}