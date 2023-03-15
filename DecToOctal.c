#include<stdio.h>
int main()
{
    int number , Octal = 0, weight = 1;
    printf("Enter a Number here : ");
    scanf("%d",&number);
    int temp = number;
    while (number != 0)
    {
        int digit = number % 10;
        Octal = Octal + digit * weight;
        weight = weight * 8;
        number = number / 10;
    }
    printf("\tOctal Equivalent of %d is :%d",temp,Octal);
    
    return 0;
}