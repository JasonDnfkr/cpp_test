#include <iostream>
#include <cstdio>
#include <vector>
using std::vector;

int fun1() {
    return 4;
}

int fun2() {
    static int cnt = 0;
    cnt++;
    return cnt;
}

int main() {
    int a = 10;
    int b = 20;

    const int* ptr1 = &a;

    int* const ptr2 = &a;

    const int &r = 5;

    int* p1 = &a;
    int* const p2 = p1;

    std::vector<std::string> vec{ 10, "hi" };

    for (auto& str : vec) {
        std::cout << str << std::endl;
    }

    std::vector<int> vec1 = { 1, 2, 3, 4, 5 };
    std::vector<int> vec2 = { 1, 2, 3, 4, 4 };

    std::vector<std::string> vec3 = { "aa", "ac", "ad" };
    std::vector<std::string> vec4 = { "ad", "aq" };

    printf_s("%d\n", vec1 > vec2);
    printf_s("%d\n", vec3 < vec4);

    int arr[4] = { 1, 2, 3, 4 };
    int* ptr3 = arr;

    printf("========\n");
    printf("%d\n", sizeof(ptr3) / sizeof(*ptr3));
    printf("========\n");

    std::vector<int> vec5(arr + 1, arr + 3);

    // p2 = p1;

    for (auto& num : vec5) {
        printf("[%d]", num);
    }

    const int &ref = fun1();
    const int* ptr = &ref;

    printf("%d\n", ref);
    printf("%p %p\n", &ref, ptr);

    std::vector<int> vec6(10, 0);
    for (int i = 0; i < vec6.size(); i++) {
        vec6[i] = i + 1;
    }

    std::vector<int>::iterator it = vec6.begin();

    int k = 4;
    while (k--) {
        printf("%d\n", *++it);
    }

    // it = vec6.begin();
    // while (it != vec6.end()) {
    //     printf("%d\n", *it);
    //     it++;
    // }

    int t = -0xff;          // 0b 0000 0000 1111 1111   ->    0b 1111 1111 0000 0001
    printf("\n\n\n");
    printf("%d\n", t);
    printf("%d\n", t >> 1); // 128: 0b 0000 0000 0111 1111  -> 0b 1111 1111 1000 0000
    printf("%d\n", t >> 2);
    printf("%d\n", t >> 3);

    char ch = 'q';

    printf("%d\n", ~'q' << 6);
    printf("%p\n", ~'q' << 6);

    printf("%p\n", ~'q');
    printf("%d\n", sizeof 1);
        // 01110001
        // 10001110
        // 00000000 00000000 00000000 01110001
        // 00000000 00000000 00011100 01000000
        // 11111111 11111111 11100011 10111111
        // ff ff e23 bf

    // int asd = 13;

    // int* ptr4 = &asd;
    // int asdd = reinterpret_cast<int*>(ptr4); 


    fun2();
    fun2();

    for (int i = 0; i < 4; i++) {
        printf("%d\n", fun2());
    }

    return 0;
}