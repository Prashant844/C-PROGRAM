#include<stdio.h>
void main()
{
    int number, sum = 0;
    printf("Enter a Number here : ");
    scanf("%d",&number);
    while(number!=0)
    {
        int digit = number % 10;
        sum += digit;
        number = number / 10;
    }
    printf("The Sum of digits of a Number is : %d",sum);
}
