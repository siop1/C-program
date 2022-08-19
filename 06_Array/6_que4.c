/* Write a program to create an array of 10 integers 
and store the multiplication table of number
entered by user. */

#include <stdio.h>
#include<conio.h>

int main(){
    int multi[10],n;
    printf("Enter no. of which you want multiplication table: ");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        multi[i]=n*(i+1);
    }
    
     for(int i=0;i<10;i++){
        printf("%d * %d= %d\n",n,i+1,multi[i]);
    }
    return 0;
}