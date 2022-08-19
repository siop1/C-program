// Why we should use %u instead of %d as format specifier for pointer
//Answer: Because %u always gives positive value but %d something give negative value as shown below.

#include <stdio.h>

int main () {
    void* val = 0xffffffff;

    printf("d = %d\n", val);
    printf("u = %u\n", val);
    printf("p = %p\n", val);

    return 0;
}