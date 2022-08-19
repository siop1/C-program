/* Program to perform addition of two matrices of any order */

# include<stdio.h>
int main(){
    printf("Program to add two matrices of any order pair\n But the order fo both matrices should be same \n");

    int n_row,n_col,r,c,sum;
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
    printf("The sum of two matrix is:\n");   
     for(r=0;r<n_row;r++){
        for(c=0;c<n_col;c++)
        {
         sum=A[r][c] + B[r][c];
         printf("%d \t",sum);
        }
    printf("\n");    
    }

return 0;
}
