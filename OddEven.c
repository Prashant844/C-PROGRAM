#include<stdio.h>
void main()
{
    int x;
    printf("Enter a Number here : ");
    scanf("%d",&x);
    if(x % 2 == 0)
    printf("%d is a even number.",x);
    else
    printf("%d is a odd number.",x);
}