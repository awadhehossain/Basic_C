/*Write a programm that justify a letter,
 is it vowel or consnant?*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any Letter: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I'
       || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        printf("It is a vowel");
    else
        printf("It is a constant");
    return 0;
}
