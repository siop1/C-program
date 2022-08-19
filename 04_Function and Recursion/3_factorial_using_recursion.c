#include <stdio.h>
int factorial(int x);

int main(){
    int f;
    printf("Enter the number to find its factorial using recursion: ");
    scanf("%d",&f);
    int a=factorial(f);
    printf("Factorial of %d is %d",f,a);
    return 0;
}

int factorial(int x){
    int f;
    if (x==0 || x==1)
    {
       return 1;
    }
    else{
        f=x*factorial(x-1);
    }
    return f;
}

