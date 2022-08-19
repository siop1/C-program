#include <stdio.h>

int main(){
    char a[]="Aryan Bro";
    char b[]={'a','b','c','d','\0'};
    printf("%c\n",a[1]);
    printf("%c\n",b[3]);
    printf("%s",a);
    printf("%s",a);
    printf("%s",a);
    puts(a);
    puts(a);
    puts(a);
    char c[3],d[3];
    scanf("%s",&c[0]);
    printf("%s",c); 
    scanf("%s",d);
    printf("%s",d);
    return 0;
}