#include<stdio.h>
#include<math.h>
void main()
{
    int number, digit , temp, result = 0;
    printf("Enter a number here : ");
    scanf("%d",&number);
    while(number != 0) // here we set the range for stopped the process.
    {
      digit = number % 10; // here we get the last digit on every step.
      result = result * 10 + digit; // here we stored the getting digit with add previous result.
      number = number / 10; // here we remove the last digit on every step.
    }
    printf("\n%d",result);
}