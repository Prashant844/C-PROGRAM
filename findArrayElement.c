#include<stdio.h>
void main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int number;
    printf("Enter a Number ,which you want to Find :");
    scanf("%d",&number);
    for(int i=0; i<10; i++)
    {   if(arr[i] == number)
        {
        printf("\n%d is found at index %d ",arr[i],i);
        }
        
    }

}