// WAP to print the address of a variable. Use this variable to get the value of that variable.
#include <stdio.h>

int main(){
    int a=10;
    printf("Address of a= %u\n",&a);
    printf("Value of a= %d\n",*(&a));

    return 0;
}