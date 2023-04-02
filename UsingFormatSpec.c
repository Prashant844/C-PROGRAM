#include<stdio.h>
void main()
{
    int dec,octal;
    printf("Enter a Number here for Octal conversion: ");
    scanf("%o",&dec);
    printf("The Octal Equivalenet is : %x",dec);
    printf("\n***************************");
    printf("\n Enter a Number here for Decimal conversion: ");
    scanf("%x",&octal);
    printf("The Decimal Equivalenet is : %o",octal);
    printf("\n***************************");
}