/*
Write a programme that use relational operator
 and shows the input number is even/odd.
*/
//Using conditional control statement (if,else)
#include<stdio.h>
int main()
{
 int a;
printf("Enter an integer number: ",a);
scanf("%d",&a);
if(a%2==0)
printf("The number is Even.");
else
printf("The number is Odd.");
    return 0;
}
