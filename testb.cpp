#include <cstdio>
#include <cstdint>
#include <cstring>
#include <cstdlib>

void fun1(uint8_t* &ptr) {
    uint8_t* alloc = new uint8_t[4];
    memset(alloc, 0x01, 4);
    ptr = alloc;
}

void fun2(uint8_t* &ptr) {
    uint8_t* alloc = (uint8_t*)malloc(4);
    memset(alloc, 0x01, 4);
    ptr = alloc;
}

int main() {
    uint8_t* ptr;
    fun1(ptr);

    for (int i = 0; i < 4; i++) {
        printf("%d ", ptr[i]);
    }

    return 0;
}