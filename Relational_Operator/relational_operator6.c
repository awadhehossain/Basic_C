/*
Write a programme that use relational operator
Print your grade point
*/
//using if,else if,else
//Number>=80=A
//Number>=70=A-
//Number>=60=B
//Number>=50=C
//Number>=40=D
//Number<33=fail
#include<stdio.h>
int main()
{
int a;
printf("Enter your Marks: ");
scanf("%d",&a);
if(a>=80)
printf("Your grade is A");
else if(a>=70)
printf("Your grade is A-");
else if(a>=60)
printf("Your grade is B");
else if(a>=50)
printf("Your grade is C");
else if(a>=33)
printf("Your grade is D");
else
printf("You Are Fail");
    return 0;
}