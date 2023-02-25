#include<stdio.h>
void main()
{
    char vowel;

    printf("Enter any Alphabat here : ");
    fflush(stdin);
    scanf("%c",&vowel);

    if(vowel >= 65 && vowel <= 90 || vowel >= 97 && vowel <= 122 )
    {
       if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u' )
       {
        printf("%d , It's a vowel",vowel);
       }
       else
       {
        printf("\n*********************\n");
        printf("%d , It's a consonant",vowel);
        printf("\n*********************");
       }
    }
}