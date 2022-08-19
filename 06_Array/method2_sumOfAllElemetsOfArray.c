// WAP to find sum of all the elements of array.
#include <stdio.h>
void sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++)
    sum=sum+arr[i];
    printf("sum=%d",sum);
}

int main(){
    int size=5;
    int a[5]={10,20,30,40,50};
    sum(a,size);
    return 0;
}

