/*Write a programme that take a year from keyboard 
and shows the year is leap year or not
*/
#include<stdio.h>
int main()
{
int year;
printf("Enter any year: ");
scanf("%d",&year);
if(year%400==0)
printf("This year is a Leap Year");
else if(year%4==0 && year%100 !=0)
printf("This year is a Leap Year");
else
printf("This year is not a leap year");
    return 0;
}