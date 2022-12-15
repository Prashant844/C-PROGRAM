#include<stdio.h>
int main()
{
    //**************Using two variable*****************

    // int a ,b;
    //     printf("\nEnter the value of the First Variable here : ");
    //     scanf("%d",&a);
    //     printf("\nEnter the value of the Second Variable here : ");
    //     scanf("%d",&b);
    //     if(a != 0 && b != 0)
    //     {
    //     if(a > b)
    //         printf("\nNumber %d is greater than %d ",a,b);
    //     else
    //         printf("Number %d is greater than %d ",b,a);
    //     }
    //     else
    //     printf("Sorry!!! , You have not yet any number....\n");

    //     printf("\n Compiled By : PRASHANT GUPTA L-ID : 2224MCA1004 ");

    // **************Using three variable*****************
    
    int a ,b ,c;
        printf("\nEnter the value of the First Variable here : ");
        scanf("%d",&a);
        printf("\nEnter the value of the Second Variable here : ");
        scanf("%d",&b);
        printf("\nEnter the value of the Third Variable here : ");
        scanf("%d",&c);
        if(a != 0 && b != 0 && c != 0)
        {
        if(a > b && a > c)
            printf("\nNumber %d is greater than %d,%d",a,b,c);
        else if(b > a && b > c)
            printf("Number %d is greater than %d,%d",b,a,c);
        else
            printf("Number %d is greater than %d,%d",c,a,b);
        }
        else
        printf("Sorry!!! , You have not yet any number....");

        printf("\n Compiled By : PRASHANT GUPTA L-ID : 2224MCA1004 ");
        return 0;
}