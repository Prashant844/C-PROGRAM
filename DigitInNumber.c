#include<stdio.h>
void main()
{
    int Num , digit , Sum = 0;
    printf("Enter any Number here : ");
    scanf("%d",&Num);

    while(Num != 0)
    {
       digit = Num % 10;
       Num--;
    }
    // printf("The Sum of Digit In Number : %d",Sum);
}