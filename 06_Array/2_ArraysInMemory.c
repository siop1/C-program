#include <stdio.h>

int main(){
    float a[]={1,2,3,4,1000000};
    printf("a[0]=%d\n",a[0]);
    printf("sizeof a[0]=%d\n",sizeof(a[0]));
    printf("sizeof a[1]=%d\n",sizeof(a[1]));
    printf("sizeof a[2]=%d\n",sizeof(a[2]));
    printf("sizeof a[3]=%d\n",sizeof(a[3]));
    printf("sizeof a[4]=%d\n",sizeof(a[4]));

    printf("Address of a[0]=%u\n",&(a[0]));
    printf("Address of a[1]=%u\n",&(a[1]));
    printf("Address of a[2]=%u\n",&(a[2]));
    printf("Address of a[3]=%u\n",&(a[3]));
    printf("Address of a[4]=%u\n",&(a[4]));



    return 0;
}