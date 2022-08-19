#include <stdio.h>

int main(){
    char name[25];
    char address[25];
    char telno[25];
    FILE *fp;
    int i,n;
    fp=fopen("rec.data","a");
    printf("Enter how many records: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the name: ");
        scanf("%s",name);
        printf("Enter the address: ");
        scanf("%s",address);
        printf("Enter the telno: ");
        scanf("%s",telno);
        fprintf(fp,"\n%s\t%s\t%s",name,address,telno);
    }
    fclose(fp);
    fp=fopen("rec.data","r");
    printf("Name\tAddress\t\t\tTelno\n");
    while(fscanf(fp,"%s%s%s",name,address,telno)!=EOF){
        printf("\n%s\t%s\t%s",name,address,telno);
    }
    fclose(fp);
    rename("rec.data","record.data");
    remove("record.data");

    return 0;
}