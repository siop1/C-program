#include<stdio.h>

int main()
{
    int user,gre,ater;
    printf("Enter: \n 1 to find greater no.\n 2 to find smaller no.\n 3 to add two no.\n 4 to exit\n your choice:");
    scanf("%d",&user);
switch(user){
case 1:{
    printf("Enter two numbers\n");
    scanf("%d %d",&gre,&ater);
    int com1=(gre>ater)? gre:ater;
    printf("Ans: %d is greater between %d and %d\n",com1,gre,ater);
    }
    break;
case 2:{
    printf("Enter two numbers\n");
    scanf("%d %d",&gre,&ater);
    int com2=(gre<ater)? gre:ater;
    printf("Ans: %d is smaller between %d and %d\n",com2,gre,ater);
    }
    break;
case 3:{
    printf("Enter two numbers\n");
    scanf("%d %d",&gre,&ater);
    int add=gre+ater;
    printf("Ans: sum of %d and %d is %d \n",gre,ater,add);
    }
    break;
case 4:{break;}
default:{printf("Invalid choice\n");
break;}



}
return 0;
}