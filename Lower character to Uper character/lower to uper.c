/*
Write a programe that convert lowercase to upercase
 without library function.
*/
#include<stdio.h>
int main()
{
    char m,n;
    printf("Enter two lowercase letters:");
    scanf("%c %c",&m,&n);
    printf("The uppercase letters are: %c %c",m-32,n-32);//ASCII codes deffrence between uppsser and lower is 32
    return 0;

}
