#include<stdio.h>
void main()
{
    int arr[50];
    int number;
    int maxelement;
    printf("Enter how many element Your stored in an Array : ");
    scanf("%d",&number);
    for(int i=0; i<number;i++)
    {
     printf("Enter %d element : ",i);
      scanf("%d",&arr[i]);
    }
    maxelement = arr[0];
    for(int j=0; j<number; j++)
    {
        if(maxelement < arr[j])
        maxelement = arr[j];
    }
    printf("\nMaximum Element in the Array is : %d",maxelement);
}
