/* Program to display sum of all even numbers
upto entered number*/
#include<stdio.h>

int main()
{
    int a,n,sum;
    printf("Enter a number upto which you want to get sum of numbers\n ");
    scanf("%d",&a);
    if(a%2==0)
        {
        n=a/2;
        sum=n*(n+1);
        printf("Sum of all even numbers upto entered number %d is %d\n",a,sum);
        }
    else
        {
        n=(a-1)/2;
        sum=n*(n+1);
        printf("Sum of all even numbers upto entered number %d is %d\n",a,sum);
        }
        
        
        
        
return 0;
}