#include <stdio.h>
void who();
void love();          // These are Function prototype
void eat();

int main(){
    printf("Hello I am main \n");
    who();       // These are function call
    love();
    eat();
    return 0;
}
// Userdefined functionn i.e. Function definition
void who(){
    printf("I am Nepali\n");
}
void love(){
    printf("I love Nepal\n");
}
void eat(){
    printf("I eat gundruk\n");
}