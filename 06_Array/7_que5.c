/* WAP containing a function which reverses the array passed to it.*/

#include <stdio.h>
void reverse(int arr[],int size){
    int temp;
    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}
int main(){
    int size;
    int arr[6]={1,2,3,4,5,6};
    reverse(arr,size);
    for(int i=0;i<size;i++)
    printf("Element%d is :%d\n",i+1,arr[i]);
    return 0;
}