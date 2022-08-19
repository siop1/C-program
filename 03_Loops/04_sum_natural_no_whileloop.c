# include<stdio.h>
int main(){
    int n=1,sum=0,a;
    printf("Enter the number upto which you want sum of natural numbers:\n");
    scanf("%d",&a);
    while(n<=a)
        {
           sum=sum+n;
           n++;
        }
    printf("The sum of all natural numbers upto %d is %d\n",a,sum);
return 0;
}