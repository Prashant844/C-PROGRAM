#include<stdio.h>
void main()
{
    int ch;
    ch = getchar(); //it will read only first input character.
    putchar(ch); //it will print only first input character.
     
     //*******************************************
     
    char str[10];
    printf("\nEnter the value of the string here : ");
    gets(str); //it will getting the multiple input at a time.
    printf("Your Input is  : %s",str);
    // puts(str); // it will print the getting string.
}