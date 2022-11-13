#include <iostream>

class ClassA {
protected:


public:
    ClassA(/* args */);
    ~ClassA();

    void outputA();

    int x;
    int y;
    int* z;

    typedef struct St {
        int a;
        int b;
        St(int _a, int _b) {
            a = _a;
            b = _b;
        } 
    } St;

    St* st;
};

ClassA::ClassA(/* args */) {
    std::cout << "constructor A" << std::endl;
    x = 1;
    y = 2;
    z = new int(3);

    st = new St(33, 44);
}

ClassA::~ClassA() {
}

void ClassA::outputA() {
    std::cout << "outputA" << std::endl;
}