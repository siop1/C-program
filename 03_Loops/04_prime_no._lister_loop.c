//wrong logic 
//Wap a program to list all prime numbers upto entered no.
# include<stdio.h>
int main(){
    int n;
    printf("Enter no. upto which prime no. is possible:\n");
    scanf("%d",&n);
    printf("Prime numbers upto %d are:\t",n);
    for(int i=2;i<n;i++)
    {
        if(i%2!=0 || i==2)
        {
            printf("%d , ",i);
        }
    }
    printf("\n");
return 0;
}
