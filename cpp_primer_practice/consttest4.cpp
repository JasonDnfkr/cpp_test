#include <iostream>
#include <cstdio>
using namespace std;

void fun1(const int* &x) {
    cout << *x << endl;
    cout << x << endl;
}

void fun2(const int* x) {
    cout << *x << endl;
    cout << x << endl;
}

void fun3(const int &x) {
    cout << x << endl;
    cout << &x << endl;
}

int static_var = 4;


int main() {
    int var[4] = { 1, 2, 3, 4 };
    // int var2 = 3;
    // const int convar = 2;
    int nTemp = 2019;
    int *ptrInt = &nTemp;
    const int* ptrInt2 = &nTemp;

    const int* ptr = &var[0];
    
    //下面是验证代码
    const int* &refptrInt2 = ptrInt2;   //2.这个引用是const的吗
    // *refptrInt2 = 999;      //error: assignment of read-only location '* refptrInt2'
    refptrInt2 = (int*)0x1234;

    // printf("%d\n", *refptrInt2);

    const int &ref1 = var[0];
    int const &ref2 = var[0];

    /* ---------------------------- */

    int v = 45;
    int x = 31;

    int* p = &v;

    const int* const &r = p;

    

    return 0;
}