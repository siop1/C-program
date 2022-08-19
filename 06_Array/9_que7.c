/* Print the multiplication table of 2, 7 and 9 in a smart way using minimum lines of 
code. Hint: Make your own function first. */

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
    int multi[10];
    mul_table(multi,2);
    mul_table(multi,7);
    mul_table(multi,9);
    
    return 0;
}