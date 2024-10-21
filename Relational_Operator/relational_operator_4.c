/*
Write a programme that use relational operator
take two numbers from keyboard 
and print which number is large 
if the numbers are equal 
then print the numbers are equal.
*/
//using if




#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter the First number : ");
 scanf("%d",&a);
 printf("Enter the Second number : ");
 scanf("%d",&b);
 if(a>b)
 printf("The large number is = %d",a);
 if(a<b)
 printf("The large number is = %d",b);
 if(a==b)
 printf("The numbers are equal");
    return 0;
}