//In this program we are calculating the Insurance Amount based on the Some Condtions.
#include<stdio.h>
void main()
{
    int age,Insurance_Amount = 0,discount = 0;
    char gender;
    printf("\n************ Start Of the Program *************\n");
    printf("\nEnter Your Gender here (m/y) : ");
    scanf("%c",&gender);
    printf("\nEnter Your Age here : ");
    scanf("%d",&age);
    
    Insurance_Amount = (age >= 21 && age <=30) ? 10000 :
                        (age >= 31 && age <=40) ? 15000 :
                        (age >= 41 && age <=50) ? 20000 :
                        (age >= 51 && age <=60) ? 40000 :
                        0;

    if(gender == 'm')
    {
          discount = (Insurance_Amount * 10) / 100;
          Insurance_Amount += discount;
    printf("\nInsurance Amount : %d , Payable Intrest Amt. : %d\n",Insurance_Amount, discount);
    }
    else
    {
          discount = (Insurance_Amount * 10) / 100;
          Insurance_Amount -= discount;
    printf("\nInsurance Amount : %d , discount Amt. : %d\n",Insurance_Amount, discount);
    }

    printf("\n************** End Of the Program ***************");

}