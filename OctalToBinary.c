#include <stdio.h>
int main()
{

    int number=5, bit = 0;
   
    while (number != 0)
    {
        bit = number & 1;
        printf("\n %d ", bit);
        number = number >> 1;
    }
    return 0;
}