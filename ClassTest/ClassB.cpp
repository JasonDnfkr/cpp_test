// #include <iostream>
#include "ClassA.cpp"

class ClassB : public ClassA {
private:
    /* data */
public:
    ClassB(/* args */);
    ~ClassB();

    void output();
};

ClassB::ClassB(/* args */) {
    std::cout << "constructor B" << std::endl;
}

ClassB::~ClassB() {
}

void ClassB::output() {
    std::cout << x << "  " << y << std::endl;
}