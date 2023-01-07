#include<stdio.h>
void main()
{
    //through looping 

    int number , factorial = 1;
    printf("Enter any Number here : ");
    scanf("%d",&number);
    printf("\nThe Factorial of %d is : ",number);
    while(number != 0 )
    {
    factorial = factorial * number;
    number--;
    }
    printf("%d",factorial);

}
