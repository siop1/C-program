/* Repeat que7 for a custom input given by user */

#include <stdio.h>
void mul_table(int arr[],int n){
    printf("Mutiplication table of %d:\n",n);
    for(int i=0;i<10;i++)
        arr[i]=n*(i+1);
    for(int i=0;i<10;i++)
    printf("   %d * %d= %d\n",n,i+1,arr[i]);
    printf("______________________________________________________\n\n");

}

int main(){
    int n;
    printf("Enter the number to get its multiplication table: ");
    scanf("%d",&n);
    int multi[10];
    mul_table(multi,n);

    return 0;
}