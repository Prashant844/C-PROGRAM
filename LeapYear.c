#include<stdio.h>
void main()
{
     int year;
     do
     {
        printf("\nEnter a Year here (format : YYYY) : ");
     scanf("%d",&year);
     if(year % 4 == 0)
    printf("%d is a leap year.",year);
    else
    printf("%d is not a leap year.",year);
     } while (year != 0);
 }