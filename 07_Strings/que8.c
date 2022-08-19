/* WAP to count the occurence of a given character
in a string */

#include <stdio.h>

int main(){
    int count=0;
    char c,arr[]="Aryannnnarbrc";
    printf("Enter character to count: ");
    scanf("%c",&c);
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==c)
        count++;
    }
    printf("Number of %c in %s is: %d",c,arr,count);
    return 0;
}