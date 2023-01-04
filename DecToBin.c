#include<stdio.h>
#include<conio.h>

int main()
{
    int ch = 5, bit = 0;
    while(ch!=0)
    {
        bit = ch&1;
        printf("\n %d ",bit);
        ch = ch>>1;
    }
    return 0;
}