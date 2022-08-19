# include<stdio.h>
int main(){
    int a;// declaring variable type
    printf("Enter a number:\n");
    scanf("%d",&a);// taking user input 
    while(a<15){// check for if condition is true and execute if true
        printf("%d\n",a);
        a++; // This increase value of a by 1
    }
    int b=0;
    while(b<=20){
        if(b>=10){
            printf("%d\n",b);
        }
        b++;

    }
    
return 0;
}