#include <cstdio>
#include <iostream>
using namespace std;

const char* newstr = "abbaba";

char* fun1(char* s) {
    return s;
}

const char* fun2(const char* &s) {
    s = newstr;
    return s;
}

const char* fun3(const char* const &s) {
    cout << "addr in fun3: " << &s << endl;
    return s;
}


const char* &fun4(const char* &s) {
    cout << "addr in fun4: " << &s << endl;


    return s;
}

// void fun3(const char* &s) {
//     printf("fun3 called\n");
// }

int main() {
    char str1[12] = "hello world";
    const char* str2 = "hello const";
    printf("%s\n", fun1(str1));

    const char* ptr1 = fun2(str2);
    // const char* tmp = str1;

    cout << str2 << endl;

    cout << fun3(str1) << endl;
    cout << &str1 << endl;

    fun4(str2) = newstr;
    // cout << &str1 << " " << &ptr1 << endl; 
    // fun3(str1);


    return 0;
}