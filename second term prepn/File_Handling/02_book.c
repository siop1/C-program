#include <stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("02_book.txt","r");
    printf("Output is: ") ;
    while(fgetc(fptr)!= '\0'){
        printf("%c",fgetc(fptr));
    }
    return 0;
}