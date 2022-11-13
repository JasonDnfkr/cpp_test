#include <cstdio>

class A;

class Z {
private:
    A* a;

public:
    Z();

    int ff(int a, int b) {
        return a - b;
    }

};

class A {
public:
    Z* z;
    int fun(int a, int b) {
        return a + b; 
    }
    A() { }
    A(Z* z) {
        int d = z->ff(4, 222);
        printf("%d\n", d);
    }
    ~A() { }
};

Z::Z() {
    a = new A();
    a->z = this;
}

class B : public A {

public:
    B() {  }
    ~B() {  }

    B(int (*fun_ptr)(int a, int b)) {
        int c = fun_ptr(3, 4);
        printf("%d\n", c);
    }

};

int add(int x, int y) {
    return x + y;
}

int main() {
    A* a = new A();
    printf("%d\n", a->fun(1, 2));

    B* b = new B(add);

    return 0;
}