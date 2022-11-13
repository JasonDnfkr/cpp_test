// #include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <queue>
using namespace std;

struct _StructA {
    int a;
    int b;
    _StructA(int _a, int _b) : a(_a), b(_b) { }
    _StructA(const struct _StructA* sa) {
        a = sa->a;
        b = sa->b;
    }
};

typedef struct _StructA StructA;


typedef struct _StructB {
    int a;
    int b;
    _StructB(int _a, int _b) : a(_a), b(_b) { }
    _StructB(const _StructB* sa) {
        a = sa->a;
        b = sa->b;
    }
} StructB;

// typedef struct _StructA StructA;

int main() {
    StructA* sa;
    // sa = new StructA(1, 4);
    sa = (struct _StructA*)malloc(sizeof(StructA));
    sa->a = 1;
    sa->b = 111;

    printf("%d %d\n", sa->a, sa->b);

    StructA* sa_2 = new StructA(sa);

    StructB* sb = new StructB(5, 6);
    StructB* sb_2 = new StructB(sb);

    printf("%d %d\n", sb_2->a, sb_2->b);

    queue<pair<int, int> > q;

    q.em

    return 0;
}