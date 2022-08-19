#include <stdio.h>

int main(){
    int x=5;
    printf("%d %d %d ",x,++x,x++); /* Different compilers have different 
    behavior on argument but gcc compiler behavior on argument is from right to left*/
    return 0;
}