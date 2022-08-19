// Call by reference is used to swap value because call by value doesnot work for this program
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 3;
    int b = 4;
    printf("before a=%d\n", a);
    printf("before b=%d\n", b);
    swap(&a, &b);
    printf("after a=%d\n", a);
    printf("after b=%d\n", b);
    return 0;
}