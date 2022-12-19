           //goto keyword.
           //syntax of goto keyword  : 
             
             // goto target_Location_Name;

             // target_Location_Name colon':'
             // statement , which u want to execute. 
#include<stdio.h>
void main()
{
    int x = 2;

        if(x == 1)
        {
            printf("This is 1;");
        }    
        else 
           // here we create a jump statement through goto keyword.
           // goto target_Location_Name;
           goto Iamhere;

           Iamhere : //target_Location_Name colon':'
        printf("This is 2");

}