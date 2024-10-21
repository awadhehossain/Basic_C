/*
Write a programe that convert upercase to lowercase
 without library funtion.
*/
#include<stdio.h>
int main()
{
    char m,n;
    printf("Enter two upercase letters:");
    scanf("%c %c",&m,&n);
    printf("The lowercase letters are: %c,%c",m+32,n+32);
//ASCII codes deffrence between upercase and lowercase is 32ss
    return 0;
}
