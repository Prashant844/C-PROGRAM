#include <stdio.h>
void main()
{
    
           int dayNumber;
           printf("*********************************\n");
           printf("Enter day number here (range 1-7)....\n");
           scanf("%d",&dayNumber);
           printf("*********************************\n");
           
           //Method - 1 Using Switch Condition Statement;
           
          switch(dayNumber)
          {
              case 1:
              printf("Today is :  Sunday");
              break;
               
              case 2:
              printf("Today is : Monday");
              break;
               
              case 3:
              printf("Today is : Tuesday");
              break;
               
              case 4:
              printf("Today is : Wednesday");
              break;
               
              case 5:
              printf("Today is : Thursday");
              break;
               
              case 6:
              printf("Today is : friday");
              break;
               
              case 7:
              printf("Today is : Saturday");
              break;
               
              default : 
              printf("Invalid day Number.....!!!!");
              break;
          }

           //Method - 2 Using Conditonal Operator;
        
        // dayNumber == 1 ? printf("Today is : Sunday") 
        //                : dayNumber == 2 
        //                ? printf("Today is : Monday") 
        //                : dayNumber == 3 
        //                ? printf("Today is : Tuesday") 
        //                : dayNumber == 4 
        //                ? printf("Today is : Wednesday") 
        //                : dayNumber == 5 
        //                ? printf("Today is : Thursday") 
        //                : dayNumber == 6 
        //                ? printf("Today is : Friday") 
        //                : dayNumber == 7 
        //                ? printf("Today is : Saturday") 
        //                : 
        //                  printf("Invalid Day Number.......!!!!") ;
        printf("\n Compiled by : PRASHANT GUPTA , L-ID : 2224MCA1004 ");
}