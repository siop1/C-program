/* Write your own version of strcpy function from <string.h>*/

#include <stdio.h>
void  strcopy(char arr2[],char *ptr ){
    int i=0;
    for(i;*ptr!='\0';i++){
        arr2[i]=*ptr;
        ptr++;
    }
    arr2[i]='\0';
}
int main(){
    char arr1[]="Aryan";
    char arr2[20];
    strcopy(arr2,arr1);
    puts(arr2);
    return 0;
}