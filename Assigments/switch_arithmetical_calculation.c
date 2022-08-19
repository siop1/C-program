/* Program to do arithmetical calculations
using user input*/
#include<stdio.h>
int main()
{   float a,b;
    int c;
    printf("Enter two numbers:\n");
    scanf("%f %f",&a,&b);
    printf("What do you want to perform?\n 1 for addition\n 2 for subtraction\n 3 for division\n 4 for multiplication\n Enter your choice:");
    scanf("%d",&c);
    if(c<=4)
    {
        switch(c)
            {
            case 1: printf("--->> %f + %f = %0.2f \n",a,b,a+b);
            break;
            case 2: printf("--->> %f - %f = %0.2f \n",a,b,a-b);
            break;
            case 3: printf("--->> %f / %f = %0.2f \n",a,b,a/b);
            break;
            case 4: printf("--->> %f * %f = %0.2f \n",a,b,a*b);
            break;
            }
    }
    else{printf("Invalid choice!! or invalid number");}
    return 0;
}