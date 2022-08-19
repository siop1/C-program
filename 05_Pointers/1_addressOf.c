#include <stdio.h>

int main(){
    int a=2;
    int *b=&a;
    printf("Address of a is %d\n",&a);
    printf("The value of a is %d\n",a);
    printf("Value of a is %d\n",*(&a));
    printf("The address of b is %d\n",&b);
    printf("Value of b is %d\n",*(&b));
    printf("Value of b is %d\n",b);




    return 0;
}