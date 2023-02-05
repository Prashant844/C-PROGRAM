#include<stdio.h>
void main()
{
    int Matrix_A[50][50];
    int row,column;
    printf("Enter Row here : ");
    scanf("%d",&row);
    printf("Enter Column here : ");
    scanf("%d",&column);
    printf("Enter %d x %d Matrix Elements : ",row,column);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("\nenter element %d %d : ",i,j);
            scanf("%d",&Matrix_A[i][j]);
        }
        printf("\n");
    }
    printf("**************************\n");

  printf("[\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("  %d ",Matrix_A[i][j]);
        }
        printf("\n");
    }
  printf("]");
}