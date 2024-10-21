/*write a programe that take a number from keyboard
 and print what the number is 
 Even/Odd
 */
#include<stdio.h>
int main()
{
 int a;
 printf("Enter any integer number: ");
 scanf("%d",&a);
if(a%2==0)
printf("The number is even.");
else
printf("The number is odd.");
    return 0;
}