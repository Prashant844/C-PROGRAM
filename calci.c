#include<stdio.h>
void main()
{
    int a,b, result=0;
    char ch,optr;
    do
    {
        /* code */
    printf("Enter the value of Var1 : ");
    scanf("%d",&a);
    fflush(stdin);
    printf("Enter the value of Var2 : ");
    scanf("%d",&b);
    fflush(stdin);
    printf("Enter the value of operator(+,/,-,*) : ");
    scanf("%c",&optr);
    fflush(stdin);
    printf("The value of var1 : %d \n The Value of Var2 : %d \n Operation perform : %c",a,b,optr);
    printf("\n*******************************\n");
    printf("Do you want to continue.....(y/n) : ");
    scanf("%c",&ch);
    switch (ch)
    {
    case '+'/* constant-expression */:
        /* code */
        result = a+b;
        printf("Addition of Two Number is : %d",result);
        break;
    case '-'/* constant-expression */:
        /* code */
        result = a-b;
        printf("Subtraction of Two Number is : %d",result);
        break;
    case '*'/* constant-expression */:
        /* code */
        result = a*b;
        printf("Multiplication of Two Number is : %d",result);
        break;
    case '/'/* constant-expression */:
        /* code */
        result = a/b;
        printf("Division of the Two Number is :  %d",result);
        break;
    
    default:
     printf("invalid Operator case!!!!");
        break;
    }
    }
    while (ch == 'y');
    
}