#include<stdio.h>
void main()
{
    int binary, Hex = 0, weight=1;
    printf("Enter a Binary Number here ,only these two digit contain(0,1): ");
    scanf("%d",&binary);
    while(binary != 0)
    {
        int digit = binary % 10;
        Hex = Hex + digit * weight;
        binary = binary / 10;
        weight = weight * 16;
    }
    printf("HexaDecimal Equaivalent is : %d ",Hex);
}