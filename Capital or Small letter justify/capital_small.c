/*Write a programme that take a char input from keyboard
and shows it's capital or small letter or not a letter */
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("It's a Capital letter");
    else if(ch>='a' && ch<='z')
        printf("It's a Small letter");
    else
        printf("It's not a letter");
    return 0;
}
