/*WAP having a variable z. Print the address of z. Pass this variable to a function and print its address.
Are these addresses same ? Why ? */

#include <stdio.h>
void pass(int a){
    printf("Address of a= %u\n");
}

int main(){
    int z;
    printf("Address of z= %u\n",&z);
    pass(z);
    return 0;
}