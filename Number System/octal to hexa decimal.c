/*
Write a programe that convert octal number to hexa decimal number
*/
#include<stdio.h>
int main()
{
    int number;
    printf("Enter an Octal number :");
    scanf("%o",&number);
    printf("The Hexa-Decimal number is : %x",number);
    return 0;
}
