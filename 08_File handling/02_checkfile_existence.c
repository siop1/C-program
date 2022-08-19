#include <stdio.h>

int main(){
    FILE *fptr;
    char a[50];
    fptr=fopen("file1.txt","r");
    if(fptr==NULL){
        printf("This file doesnot exist \n");
    }
    else{
    fscanf(fptr,"%s",&a);
    fclose(fptr);
    printf("string=%s\n",a);}
    return 0;
}