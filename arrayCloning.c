#include<stdio.h>
void main()
{
    int arr[10] = {1,2,5,10,5,6,7,8,9,10}; 
    int arr2[10];
    for(int i=0; i<10; i++)
    { 
        arr2[i] = arr[i];
        printf("%d ",arr2[i]);
    }
}
