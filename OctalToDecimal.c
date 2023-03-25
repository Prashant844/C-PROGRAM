#include<stdio.h>
int main()
{
    int number , Decimal = 0, weight = 1;
    printf("Enter a Number here : ");
    scanf("%d",&number);
    int temp = number;
    while (number != 0)
    {
        int digit = number % 10;
        Decimal = Decimal + digit * weight;
        weight = weight * 10;
        number = number / 10;
    }
    printf("\t Decimal Equivalent of %d is :%d",temp,Decimal);
    
    return 0;
}