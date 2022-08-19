#include <stdio.h>

int main(){
    FILE *fptr;
    char employee[20];
    int salary[20];
    for(int i=0;i<3;i++){
        printf("Enter the name of employee_%d: ",i+1);
        scanf("%c",employee[i]);
        printf("Enter the salary of employee_%d: ",i+1);
        scanf("%d",&salary[i]);
    }
    return 0;
}