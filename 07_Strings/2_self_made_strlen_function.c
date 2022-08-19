#include <stdio.h>
void strlength(char *ptr){
    int length=0;
    while(*ptr!='\0'){
        length++;
        ptr++;
    }
    printf("string length=%d",length);

}

int main(){
    printf("*****This is String counting program by ASK*****\nEnter text....\n");
    char arr[100];
    gets(arr);   
    strlength(arr);
    return 0;
}