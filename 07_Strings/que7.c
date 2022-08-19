/* Write a program to decrypt the string encrypted
using encrypt function in que6 */

#include <stdio.h>
void encrp(char *ptr){
    while(*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;
    }

}
int main(){
    char arr[10000];
    printf("Enter the encrypted text to decrypt: ");
    gets(arr);
    encrp(arr);
    printf("Decrypted string is: %s",arr);

    return 0;
}