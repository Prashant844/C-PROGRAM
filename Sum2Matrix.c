#include<stdio.h>
void main()
{
    int Matrix_A[50][50],
        Matrix_B[50][50],
        Matrix_C[50][50];
    
    // for matrix A.
    int row,column;
    printf("Enter Row for Matrix A here : ");
    scanf("%d",&row);
    printf("Enter Column for Matrix here : ");
    scanf("%d",&column);
    // printf("Enter %d x %d Matrix Elements : ",row,column);
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("\nenter element %d %d for Matrix A: ",i,j);
            scanf("%d",&Matrix_A[i][j]);
            printf("\nenter element %d %d for Matrix B: ",i,j);
            scanf("%d",&Matrix_B[i][j]);
        }
        printf("\n");
    }

   //  For Matrix B
    // int rowB,columnB;
    // printf("Enter Row for Matrix B here : ");
    // scanf("%d",&rowB);
    // printf("Enter Column for Matrix B here : ");
    // scanf("%d",&columnB);
    // printf("Enter %d x %d Matrix B Elements : ",rowB,columnB);
    // for(int i=0; i<rowB; i++)
    // {
    //     for(int j=0; j<columnB; j++)
    //     {
    //         printf("\nenter element %d %d : ",i,j);
    //         scanf("%d",&Matrix_B[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("**************************\n");

    // For sum of Matrix A , Matrix B.
     printf("\nThe Sum of %d x %d Matrix is : ",row,column);
  printf("\n\n[\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            Matrix_C[i][j] = Matrix_A[i][j] - Matrix_B[i][j];
            printf(" %d ",Matrix_C[i][j]);
        }
        printf("\n");
    }
  printf("]");
}