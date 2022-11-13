#include "ClassB.cpp"

#include <cstdio>

int main() {
    ClassA* classA = new ClassA();
    ClassB* classB = (ClassB*)classA;
    classB->output();
    classB->outputA();
    ClassB* classB2 = classB;
    classB2->output();

    printf("%x %x %x\n", classA->z, classB->z, classB2->z);
    printf("%d %d ---- %x %x\n", classA->st->a, classA->st->b, &classA->st->a, &classA->st->b);
    printf("%d %d ---- %x %x\n", classB->st->a, classB->st->b, &classB->st->a, &classB->st->b);
    printf("%d %d ---- %x %x\n", classB2->st->a, classB2->st->b, &classB2->st->a, &classB2->st->b);

    return 0;
}