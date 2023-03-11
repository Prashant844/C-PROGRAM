#include<stdio.h>
void main()
{
    int binary, Decimal = 0, weight=1;
    printf("Enter a Binary Number here ,only these two digit contain(0,1): ");
    scanf("%d",&binary);
    while(binary != 0)
    {
        int digit = binary % 10;
        Decimal = Decimal + digit * weight;
        binary = binary / 10;
        weight = weight * 2;
    }
    printf("Decimal Equaivalent is : %d ",Decimal);
}