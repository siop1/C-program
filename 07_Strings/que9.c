/* WAP to check whether a given character is present
in a string or not. */

#include <stdio.h>

int main(){
    int count=0;
    char c;
    char arr[]="Aryannnnarbrc";
    printf("Enter character to count: ");
    scanf("%c",&c);
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==c){
        printf("%c is present in %s",c,arr);
        break;}
        // else
        // count=1;
    }
    //  printf("%c is not  present in %s",c,arr);

    return 0;
}