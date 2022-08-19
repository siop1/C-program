//WAP to rate app using switch-case

# include<stdio.h>
int main(){
    // SWITCH CASES 

    int rating;
    printf("Enter rating value from 1 to 5:\n");
    scanf("%d",&rating);
    switch(rating){
        case 1:{printf("your rating is 1\n");printf("your rating is 1\n");}
        break;
        case 2:printf("your rating is 2\n");
        break;
        case 3:printf("your rating is 3\n");
        break;
        case 4:printf("your rating is 4\n");
        break;
        case 5:printf("your rating is 5\n");
        break;
        default:printf("your rating is invalid\n");
    }
//Below are not the part of this program
    /* CLEARING DOUBTS BETWEEN EQUAL COMPARISION
    OPERATOR AND ASSIGNMENT OPERATOR */

    // int a=15;
    // if(a=14)
    // printf("you are right");
    // else
    // printf("you are wrong");


    /* Finding income tax of an employee as per given slab:
    below 2.5 lakhs      0% tax
    2.5 to 5 lakhs       5% tax
    5 to 10 lakhs        20% tax
    above 10 lakhs       30% tax
    */

    
return 0;
}