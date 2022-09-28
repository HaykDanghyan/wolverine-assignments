#include <stdio.h>

void memset(void* p, char val, size_t count) {
    while (count--) {
        *(char*)p = val;
        ++p;
    }
}

void main() {
    char buf[10];
    memset(buf, 'a', 2);
    memset(buf + 2, 'b', 5);
    memset(buf + 7, 'c', 3);
    printf("%s\n", buf);
}