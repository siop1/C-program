#include <stdio.h>
#include <string.h>
struct employee{
    int id;
    char name[20];
    char address[40];
}e[100];

int main(){
    int n,temp_i;
    char temp_c[40];
    printf("Enter the no. of employee: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter id, name and address of employee_%d: \n",i+1);
        scanf("%d %s %s",&e[i].id,e[i].name,e[i].address);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(e[i].id > e[j].id){
                temp_i=e[i].id;
                e[i].id=e[j].id;
                e[j].id=temp_i;

                strcpy(temp_c,e[i].name);
                strcpy(e[i].name,e[j].name);
                strcpy(e[j].name,temp_c);

                strcpy(temp_c,e[i].address);
                strcpy(e[i].address,e[j].address);
                strcpy(e[j].address,temp_c);
            }

        }
    }
     for(int i=0;i<n;i++){
        printf("Record of employee_%d: \n",i+1);
        printf("id = %d\n",e[i].id);
        printf("name = %s\n",e[i].name);
        printf("address= %s\n",e[i].address);
     }
        
    return 0;
}