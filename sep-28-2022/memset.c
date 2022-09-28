#include <stdio.h>

void my_memset(void* p, char val, size_t count) {
    while (count--) {
        *(char*)p = val;
        ++p;
    }
}

void main() {
    char buf[10];
    my_memset(buf, 'a', 2);
    my_memset(buf + 2, 'b', 5);
    my_memset(buf + 7, 'c', 3);
    printf("%s\n", buf);
}