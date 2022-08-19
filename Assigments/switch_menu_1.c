#include<stdio.h>

int main()
{
    int user;
    float gre,ater;
    printf("Enter: \n 1 to find greater no.\n 2 to find smaller no.\n 3 to add two no.\n 4 to get difference between two no.\n 5 to exit\n your choice:");
    scanf("%d",&user);
switch(user){
case 1:{
    printf("Enter two numbers\n");
    scanf("%f %f",&gre,&ater);
    float com1=(gre>ater)? gre:ater;
    printf("Ans: %f is greater between %f and %f\n",com1,gre,ater);
    }
    break;
case 2:{
    printf("Enter two numbers\n");
    scanf("%f %f",&gre,&ater);
    float com2=(gre<ater)? gre:ater;
    printf("Ans: %f is smaller between %f and %f\n",com2,gre,ater);
    }
    break;
case 3:{
    printf("Enter two numbers\n");
    scanf("%f %f",&gre,&ater);
    float add=gre+ater;
    printf("Ans: sum of %f and %f is %f \n",gre,ater,add);
    }
    break;
case 4:{
    printf("Enter two numbers\n");
    scanf("%f %f",&gre,&ater);
    float diff=(gre>ater)? (gre-ater):(ater-gre);
    printf("Ans: Difference of %f and %f is %f \n",gre,ater,diff);
    }
    break;
case 5:{break;}
default:{printf("Invalid choice\n");
break;}



}
return 0;
}