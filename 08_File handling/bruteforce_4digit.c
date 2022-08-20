#include <stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("pin.txt","w");
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++)
            for(int k=0;k<=9;k++)
                for(int l=0;l<=9;l++)
                fprintf(fptr, "%d%d%d%d\n",i,j,k,l);
    }
    fclose(fptr);
    return 0;
}