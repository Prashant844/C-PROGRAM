#include<stdio.h>
void main()
{
int sum = 0, square = 0;
        for(int i = 1; i<=5; i++)
        {
           square = i*i;
           sum += square;
           printf("\nThe Square of %d : %d",i,square);
        }
           printf("\nSum of square from (1 to 5) : %d",sum);
}