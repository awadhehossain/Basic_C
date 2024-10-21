#include<stdio.h>
int main()

{
    char ch;
    printf("Enter any letter:");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
        printf("The  letter is  vowel.");
        break;
    case 'e':
        printf("The letter is  vowel.");
        break;
    case 'i':
        printf("The letter is  vowel.");
        break;

    case 'o':
        printf("The letter is  vowel.");
        break;
    case 'u':
        printf("The letter is  vowel.");
        break;
    case 'A':
        printf("The letter is  vowel.");
        break;
    case 'E':
        printf("The letter is  vowel.");
        break;
    case 'I':
        printf("The letter is  vowel.");
        break;
    case 'O':
        printf("The letter is  vowel.");
        break;
    case 'U':
        printf("The letter is  vowel.");
        break;
    default :
        printf("The letter is a Conosnant.");
        return 0;




    }





    return 0;
}
