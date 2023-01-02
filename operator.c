#include<stdio.h>
int main()
{
    int a=1,b=0;
    int result = (a++ + b++);
    printf("\nValue of A : %d, Value of B : %d",a,b);
    printf("\nThe result is : %d",result);
    return 0;
}