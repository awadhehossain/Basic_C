#include<stdio.h>
int main()
{
char ch;
printf("Enter any character : ");
scanf("%c",&ch);
if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I'|| ch=='o' || ch=='O' || ch=='u' || ch=='U')
 printf("It is a vowel");
 else if((ch>='b' && ch<='d') || (ch>='f' && ch<='h') || (ch<='j' && ch<='n') || (ch>='p' && ch<='t') || (ch>='v' && ch<='z'))
 printf("It is a Consonant");
else 
printf("It is not a letter");
    return 0;

}