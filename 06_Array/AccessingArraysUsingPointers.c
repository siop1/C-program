// Accessing array using pointer.
#include <stdio.h>

int main(){
    int arr[3]={1,2,3};
    int *ptr=&arr[0];
    printf("old a[0]= %d\n",*ptr);

    ptr++;
    printf("new a[0]= %d\n",*ptr);
    return 0;
}