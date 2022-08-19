/* Write a program to encrypt a string by adding 1 to the
ASCII value of its characters. */ 

#include <stdio.h>
void encrp(char *ptr){
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;
    }

}
int main(){
    char arr[10000];
    printf("Enter the text to encrypt: ");
    gets(arr);
    encrp(arr);
    printf("Encrypted string is: %s",arr);

    return 0;
}