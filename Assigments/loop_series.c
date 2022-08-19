/* Program to display following series using loop 
3,6,9,12,15 */
#include<stdio.h>

int main()
{
    printf("Series is:\n");
    for(int i=3;i<=15;i+=3)
        {
        printf("\t %d \n",i);
        }
    return 0;
}