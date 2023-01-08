#include<stdio.h>
void main()
{
    int first = 0 , second = 1, next , range = 0;
    printf(" %d  %d ",first,second);
    while(range == 10)
    {
        next = first + second;
        first = second;
        second = next;
        range++;
    }
    printf(" %d ",next);
}