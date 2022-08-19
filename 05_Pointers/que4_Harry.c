#include <stdio.h>
void av_sum(int a,int b,int *c,float *d){
    *c=a+b;
    *d=(float)(*c)/2;
}

int main(){
    int a,b,sum;
    float avg;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    av_sum(a,b,&sum,&avg);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("sum=%d\n",sum);
    printf("average=%f\n",avg);
    
    return 0;
}