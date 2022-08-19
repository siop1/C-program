#include <stdio.h>

int main(){
    FILE *fptr;
    // fptr=fopen("del.txt","w");
    // fprintf(fptr,"Hello");
    char str;
    fptr=fopen("del.txt","r");
    if(fscanf(fptr,"%c",&str)==EOF){
    printf("here is :%c\n",str);
    }
    fclose(fptr);
    return 0;
}