#include<stdio.h>
void main()
{
    int number;
    printf("Enter a number here range(1-7): ");
    scanf("%d",&number);
    switch(number)
    {
        case 1:
        printf("Today is Sunday.");
        break;
        case 2:
        printf("Today is Monday.");
        break;
        case 3:
        printf("Today is Tuesday.");
        break;
        case 4:
        printf("Today is Wednesday.");
        break;
        case 5:
        printf("Today is Thursday.");
        break;
        case 6:
        printf("Today is Friday.");
        break;
        case 7:
        printf("Today is Saturday.");
        break;
        default :
        printf("Number out of range!!!");
    }
}