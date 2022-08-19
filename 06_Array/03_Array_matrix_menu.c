/* Menu based program to perform addition and subtraction of two matrices of any order */

# include<stdio.h>
int main(){
    int n_row,n_col,r,c,sum,diff,choose;
    printf("Choose:\n 1 for addition \n 2 for substraction\n");
    scanf("%d",&choose);
    printf("Enter no. of rows in matrices: ");
    scanf("%d",&n_row);
    printf("Enter no. of columns in matrices: ");
    scanf("%d",&n_col);

    printf("Given matrices is of order %d * %d\n",n_row,n_col);
    int A[n_row][n_col],B[n_row][n_col];
    printf("Enter first  matrix:\n");
    for(r=0;r<n_row;r++){
        for(c=0;c<n_col;c++)
        {
          scanf("%d",&A[r][c]);
        }
        
    }

printf("Enter Second  matrix:\n");
    for(r=0;r<n_row;r++){
        for(c=0;c<n_col;c++)
        {
          scanf("%d",&B[r][c]);
        }
    }
    printf("The result is:\n");   
     for(r=0;r<n_row;r++){
        for(c=0;c<n_col;c++)
        {if(choose==1){
         sum=A[r][c] + B[r][c];
         printf("%d \t",sum);}
         if(choose==2){
         diff=A[r][c] - B[r][c];
         printf("%d \t",diff);}

        }
    printf("\n");    
    }

return 0;
}
