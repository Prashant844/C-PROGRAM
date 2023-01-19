#include<stdio.h>
void main()
{
    int i , j = 1;
    printf("Enter the Table Number here : ");
    scanf("%d",&i);
    printf("\n************************************");
    while(j != 11)
    {
        printf(" \n%d * %d  : %d", i,j,i*j);
        j++;
    }
    printf("\n************************************\n");
}