#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    fp=fopen("01_book.txt","w");
    putw(60,fp);
    fclose(fp);
    fp=fopen("01_book.txt","r");
    
    printf("ch is %d\n",getw(fp));
    fclose(fp);
    return 0;
}