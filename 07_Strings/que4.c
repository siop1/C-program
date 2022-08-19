/* Write a function slice() to slice a string. */

#include <stdio.h>
void slice(char arr[],int m,int n){
    int i;
    for(i=0;m<n;i++){
        arr[i]=arr[m];
        m++;
    }
    arr[i]='\0';
    printf("%s",arr);
}

int main(){
    char arr[10000];
    gets(arr);
    slice(arr,3,7);
    return 0;
}