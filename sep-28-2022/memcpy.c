#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void* my_memcpy(void* dest, const void* src, size_t count) {
    size_t x = count;
    while (count--) {
        *(char*)dest = *(char*)src;
        ++dest;
        ++src;
    }
    return dest - x;
}

void main() {
    char buf1[] = "hello, i said hello";
    char* buf2 = (char*)malloc(20);
    buf2 = (char*)my_memcpy(buf2, buf1, 6);
    printf("%s\n", buf2);
}