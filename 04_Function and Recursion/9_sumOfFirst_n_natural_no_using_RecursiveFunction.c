#include <stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter the number to find sum of all natural no. upto that no. : ");
    scanf("%d",&n);
    printf("The sum of first %d natural number is %d\n",n,sum(n));
    return 0;
}

int sum(int n){
    if(n==0){
    return 0;}
    else{
    int s=sum(n-1) + n;
    return s;}
}