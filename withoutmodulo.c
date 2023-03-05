#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number here : ");
    scanf("%d",&x);
    if(x&1 == 1)
    printf("Number is odd");
    else
    printf("Number is even");
}