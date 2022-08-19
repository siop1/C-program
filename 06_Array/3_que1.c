/* Create an array of 10 numbers.Verify using pointer arithmetic (ptr+2) points to the
third element whereas ptr is a pointer pointing to the first element of the array.*/
#include <stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=&arr[0];
    printf("value of first element: %d\n",arr[0]);
    printf("value of ptr: %d\n",*ptr);
    ptr=ptr+2;
    printf("value of third element: %d\n",arr[2]);
    printf("value of (ptr+2): %d\n",*ptr);

    return 0;
}