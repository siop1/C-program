/* Multiplication table of 10 in reverse order */

# include<stdio.h>
int main(){
    int n=10,a=10;
    printf("Multiplication table of 10\n");
    for(n;a;a--){
        printf("10 * %d = %d\n",a,n*a);

    }
return 0;
}