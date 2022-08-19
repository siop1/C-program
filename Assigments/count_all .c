#include <stdio.h>
int main()
{
    int user[5], i,pos=0,neg=0,even=0,odd=0;
    printf("Enter 5 numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &user[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if(user[i]>0){pos++;}
        if(user[i]<0){neg++;}
        if(user[i]%2==0 && user[i]>0){even++;}
        if(user[i]%2!=0 && user[i]>0){odd++;}
    }
    printf("\n Result is here....\n Positive no. =%d\n Negative no. =%d\n Even no. =%d\n Odd no. =%d\n",pos,neg,even,odd);
    

    return 0;
}