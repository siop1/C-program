/* WAP to find income tax of a person based on different percentage of tax.Here is the question
--------------------------------------------------------*
Rate of Tax				Income Range	|
--------------------------------------------------------|
0 %				0- 50000		|
10 %				50000-100000		|
20 %				100000-200000		|
30 %				more than 200000|	|
--------------------------------------------------------*

Note: I have used here function but you can also try this without function 
*/

#include <stdio.h>
void  tax(float annual_income);

int main()
{
   float annual_income;
    printf("Enter your annual income: ");
    scanf("%f", &annual_income);
    tax(annual_income);

    return 0;
}


void  tax(float annual_income){
    float tax;
    if (annual_income <= 50000)
    {
        printf("You dont have to pay tax");
    }

    else if ( annual_income > 50000 && annual_income <= 100000 )
    {
        tax =(annual_income-50000)*0.1;
        printf("You have to pay Rs. %f as tax",tax);
    }

else if ( annual_income > 100000 && annual_income <= 200000 )
    {
        tax =50000*0.1+(annual_income-100000)*0.2;
        printf("You have to pay Rs. %f as tax",tax);
    }

    else 
    {
        tax =50000*0.1+100000*0.2+(annual_income-200000)*0.3;
        printf("You have to pay Rs. %f as tax",tax);
    }
}

