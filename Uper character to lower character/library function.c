/*
Write a programe that convert upper case letter to lower case letter
with library function
*/
#include<stdio.h>
int main()
{
    char upper,lower;
    printf("Enter any upper case letter :");
    scanf("%c",&upper);
    lower= tolower(upper);
    printf("The lower case letter is : %c",lower);
    return 0;
}
