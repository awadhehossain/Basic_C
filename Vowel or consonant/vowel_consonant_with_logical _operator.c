/*Write a programme that shows the letter are vowel or consonant*/
#include<stdio.h>
int main()
{   
char A;
printf("Enter any character : ");
scanf("%c",&A);

if(A=='a' || A=='e' || A=='i' ||A=='o' || A=='u')
printf("Vowel");

else
printf("Consonant");
    return 0;
}