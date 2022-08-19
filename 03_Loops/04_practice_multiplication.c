# include<stdio.h>
int main(){
    int n,a=1;
    printf("Which number's multiplication table you want to perform?\n--->");
    scanf("%d",&n);
    for(n;a<=10;a++){
        printf("%d * %d = %d\n",n,a,n*a);
    }
return 0;
}