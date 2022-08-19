// Try que3 using call by value and verify that it doesnot change the value of asked variable

#include <stdio.h>
int change(int a){
    a=5*a;
    return a;
}

int main(){
    int a=2;
    printf("Curent value of a= %d\n",a);
    change(a);
    printf("Changed value of a= %d\n",a);
    return 0;
}