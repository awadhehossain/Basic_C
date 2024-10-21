/*
Write a programme that use relational operator
//With multipile statement.
*/
//Using conditional control statement (if,else)
#include<stdio.h>
int main()
{
int time;
printf("Enter the time (24 hours formate)= ");
scanf("%d",&time);
if(time<=11)
{
    printf("Good Morning\n");
    printf("Awadhe Hossain\n");
}
else
{
    printf("It's not Morning\n");
    printf("Awahde Hossain\n");
}
    return 0;
}