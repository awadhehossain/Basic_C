#include<stdio.h>
int main()
{
int marks;
printf("Enter your marks: ");
scanf("%d",&marks);
if(marks>100 || marks<0)
printf("This numbers do not exist");
else if(marks>=80)
printf("Your grade is A");
else if(marks>=70)
printf("Your grade is A-");
else if(marks>=60)
printf("Your grade is B");
else if(marks>=50)
printf("Your grade is C");
else if(marks>=33)
printf("Your grade is D");
else
printf("You Are Fail");
    return 0;
}
