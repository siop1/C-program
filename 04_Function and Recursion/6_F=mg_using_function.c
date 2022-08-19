#include<stdio.h>
float force(float m);

int main(){
    float m;
    printf("Enter the mass((in kg) to calculate force on that mass: ");
    scanf("%f",&m);
    printf("The force on body of mass %f kg is %f N",m,force(m));
    return 0;
}

float force(float m){
    float f=m*9.8;
    return f;
}

