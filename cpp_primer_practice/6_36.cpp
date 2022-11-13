#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string arr[10] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j" };

decltype(arr) *func1() {
    return &arr;
}

typedef string arr_str_10[10];

arr_str_10* func2() {
    return &arr;
}

string (*func3())[10] {
    return &arr;
}

typedef string (*ptr_str_arr)[10];

int main() {
    // string (*p1)[10] = func1();
    // string (*p2)[10] = func2();
    // string (*p3)[10] = func3();

    ptr_str_arr p1 = func1();
    ptr_str_arr p2 = func2();
    ptr_str_arr p3 = func3();

    for (int i = 0; i < 10; i++) {
        cout << (*p1)[i];
        cout << (*p2)[i];
        cout << (*p3)[i] << " ";
    }
    cout << endl;



    return 0;
}