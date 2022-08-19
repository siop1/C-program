//
# include<stdio.h>
int main(){
    int n,a;
    printf("Enter no. to check if it is prime no. or not \n ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {   a=2;
            break;    
        }   
    }
    if(a==2 || n<=1)
    {
     printf("%d is not prime no.\n",n);
    } 
    else
    {
    printf("%d is  prime no.\n",n       );
    }
return 0;
}