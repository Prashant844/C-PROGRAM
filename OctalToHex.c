#include<stdio.h>
int main()
{
    int number , Hex = 0, weight = 1;
    printf("Enter a Number here : ");
    scanf("%d",&number);
    int temp = number;
    while (number != 0)
    {
        int digit = number % 10;
        Hex = Hex + digit * weight;
        weight = weight * 16;
        number = number / 10;
    }
    printf("\t HexaDecimal Equivalent of %d is :%d",temp,Hex);
    
    return 0;
}