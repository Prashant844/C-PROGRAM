#include<stdio.h>
void main()
{
     int arr[] = {1,2,3,4,5,6,7,8,9,10};
     int size = (sizeof(arr)/sizeof(arr[0]));
     printf("%d",size);
}