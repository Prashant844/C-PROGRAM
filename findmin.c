#include<stdio.h>
void main()
{
    int arr[50];
    int number;
    int minelement;
    printf("Enter how many element Your stored in an Array : ");
    scanf("%d",&number);
    for(int i=0; i<number;i++)
    {
     printf("Enter %d element : ",i);
      scanf("%d",&arr[i]);
    }
    minelement = arr[0];
    for(int j=0; j<number; j++)
    {
        if(minelement > arr[j])
        minelement = arr[j];
    }
    printf("\nMinimun Element in the Array is : %d",minelement);
}
