#include <stdio.h>
void change(int *a){
    *a=5*(*a);
}

int main(){
    int a=10;
    printf("Curent value of a= %d\n",a);
    change(&a);
    printf("Changed value of a= %d\n",a);
    return 0;
}