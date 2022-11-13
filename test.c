#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef struct _A {
    uint8_t a : 2;
    uint8_t b : 2;
    uint8_t c : 2;
    uint8_t d : 2;
} A;

typedef struct _B {
    uint8_t a : 4;
    uint8_t b : 4;
} B;

typedef struct _C {
    uint32_t a : 10;
    uint32_t b : 9;
    uint32_t c : 8;
    uint32_t d : 5;
} C;

typedef struct _D {
    uint32_t a : 8;
    uint32_t b : 8;
    uint32_t c : 8;
    uint32_t d : 8;
} D;

typedef struct _Normal {
    int a;
    int b;
    int c;
} Normal;

const char* const_str = "123456789101112";
const char const_arr[6] = "12345";


uint32_t swap32(uint32_t v) {
    uint8_t* arr = (uint8_t*) &v;
    uint8_t tmp;

    tmp = arr[3];
    arr[3] = arr[0];
    arr[0] = tmp;

    tmp = arr[2];
    arr[2] = arr[1];
    arr[1] = tmp;

    return v;
}

int main() {
    A p;
    p.a = 0;
    p.b = 1;
    p.c = 2;
    p.d = 3;

    printf("%d %d %d %d\n", p.a, p.b, p.c, p.d);
    printf("sizeof: %d\n", sizeof(A));
    printf("%p\n", &p);
    printf("[%x]\n", *(uint8_t*)&p);

    B q;
    q.a = 0xf;
    q.b = 0x1;

    printf("[%x]\n", *(uint8_t*) &q);

    printf("%d\n", 0x80000001);

    C r;
    r.a = 1;
    r.b = 0;
    r.c = 0;
    r.d = 0x10; // 16 : 0b10000

    printf("[[%d]]\n", *(int32_t*) &r);

    D s;
    s.a = 0xff;
    s.b = 0xff;
    s.c = 0xff;
    s.d = 0x7f;

    printf("{%d}\n", *(int32_t*) &s);

    #define swap_order32(v)    ( ( ((v >> 0) & 0xff) << 24 ) | ( ((v >> 8) & 0xff) << 16 ) | ( ((v >> 16) & 0xff) << 8 ) | ((v >> 24) & 0xff) )

    uint32_t x1 = 0x12345678;
    printf("%x\n", swap_order32(x1));
    printf("%x\n", swap32(x1));

    uint8_t arr[4] = { 0x01, 0x02, 0x03, 0x04 };

    uint8_t* ptr = arr;
    printf("%d\n", *ptr++);
    printf("%d\n", *ptr++);
    printf("%d\n", *ptr++);
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr - 3));

    double a1, a2;
    a1 = (3.14 + 1e20) - 1e20;
    a2 = 3.14 + (1e20 - 1e20);
    printf("%p\n", *(uint64_t*)&a1);
    printf("%lf\n%lf\n", a1, a2);

    Normal* normal;
    // memset(normal, 0, sizeof(Normal));
    normal = (Normal*)malloc(sizeof(Normal));
    printf("{%d}\n", sizeof(*normal));

    printf("%d\n", sizeof(const_str));
    printf("%d\n", sizeof(const_arr));
    printf("%s\n", const_arr);

    // 1110 0100
    return 0;
}