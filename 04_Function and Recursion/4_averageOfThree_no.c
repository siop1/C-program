#include<stdio.h>
float average();

int main(){
    int a,b,c;
    float d;
    printf("Enter three numbers for which you want average \n");
    scanf("%d %d %d",&a,&b,&c);
    d= average(a,b,c);
    printf("The average of three numbers %d %d %d is %f",a,b,c,d);
    return 0;
}

float average(int a,int b,int c){
    float result=(float)(a+b+c)/3;
    return result;
    
}