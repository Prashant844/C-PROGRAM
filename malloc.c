#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p = (int*)malloc(sizeof(int)); // for single block of memory.
    *p = 10; // static value provide.
    scanf("%d",p); //Read value from the user.
    printf("The value of the P is : %d",*p);

    //for creating multiple block of memory.
    int n = 5;
    int *ptr = (int *)malloc( n * sizeof(int));
    // check memory allocate or not.
    if(ptr == NULL)
    printf("\n Memory not allocated!");
    else
    {
        printf("\n Memory allocated Successfully.");
        for (int i = 0; i < n; i++)
        {
           ptr[i] = i+1;
        }
        for (int i = 0; i < n; i++)
        {
            printf("\n %d ",ptr[i]);
        }
    }
}