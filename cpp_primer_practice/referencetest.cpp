#include <cstdio>


int& get_index_num(int* arr, int index) {
    return arr[index];
}

int add(int a, int b) {
    return a + b;
}

typedef int (*ptr_add)(int, int);

typedef int arr_10[10];

int (*func(int i))[10] {
    return 0;
}

// int *arr2[10];

// arr_10* func(int i) {

// }


int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };

    get_index_num(arr, 3) = 111;

    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }

    int a = 4;

    const int* ptr = arr;

    printf("\n%d\n", *(ptr + 1));

    // *(ptr + 1) = 3;

    printf("\n%d\n", *(ptr + 1));

    ptr_add ptr_fun1 = add;

    printf("[%d]\n", ptr_fun1(1, 44));



    return 0;
}