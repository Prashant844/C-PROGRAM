#include<stdio.h>
void checkgreater(int num1,int num2, int num3)
{
 if(num1 != 0 && num2 != 0 && num3 != 0)
        {
            if(num1 == num2 && num1 == num3 )
            {
                printf("All are Same Numbers.");
            }
            else
            {
            // logic
            if(num1 > num2 && num1 > num3)
                printf("\nNumber %d is greater than %d,%d",num1,num2,num3);
            else if(num2 > num1 && num2 > num3)
                printf("Number %d is greater than %d,%d",num2,num1,num3);
            else
                printf("Number %d is greater than %d,%d",num3,num1,num2);
            }
        }
        else
        printf("Sorry!!! , You have not yet any number....");

}
void main()
{
    int num1,num2,num3;
    printf("Enter Three Number here : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    checkgreater(num1,num2,num3);
}