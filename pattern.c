#include<stdio.h>
void main()
{
    for(int i=0; i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(j<i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}