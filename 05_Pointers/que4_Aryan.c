#include <stdio.h>
int av_sum(int a,int b){
    int sum=(a+b);
    // int av=(a+b)/2;
    // return av;
    return sum;
}

int main(){
    int a,b,sum,av;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    av_sum(a,b);
    printf("Sum of %d and %d is: %d\n",a,b,av_sum(a,b));
    printf("Average of %d and %d is: %d\n",a,b,av_sum(a,b)/2);
    return 0;
}