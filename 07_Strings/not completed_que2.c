#include <stdio.h>

int main(){
    char s[100],c[100];
    printf("Enter first string: ");
    scanf("%s",s);
    printf("Enter second string character by character:\n ");
    for(int i=0;c[i]=='\n';i++){
        fflush(stdin);
        scanf("%c",&c[i]);
    }
    printf("First string:\n",s);
    printf("Second string:\n",c);
    return 0;
}