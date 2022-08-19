#include <stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("del.txt","a");
    fputc('c',fptr);
    printf("%c",fgetc(fptr));
    return 0;
}