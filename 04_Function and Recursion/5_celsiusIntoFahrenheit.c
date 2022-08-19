#include <stdio.h>
float tempcon(float c);
int main(){
    float c;
    printf("Enter the temperature in degree celsius: ");
    scanf("%f",&c);
    printf("%f degree celsius is equal to %f degree fahrenheit \n ",c,tempcon(c));
    return 0;
}

float tempcon(float c){
     float f=1.8*c+32;
    return f;
}