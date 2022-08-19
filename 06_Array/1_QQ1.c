//Write a program to accept marks of five students in an array and print them to the screen.

#include <stdio.h>

int main(){
    float marks[5];
    for(int i=0;i<5;i++){
        printf("Enter marks of student%d: ",i+1);
        scanf("%f",&marks[i]);
    }
    printf("\n");

    for(int i=0;i<5;i++)
    printf("Marks of student%d: %f\n",i+1,marks[i]);
    
    return 0;
}