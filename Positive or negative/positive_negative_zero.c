#include<stdio.h>
int main()
{
int a;
printf("Enter any number: ");
scanf("%d",&a);
if(a>0)
printf("The number is Positive.");
else if(a<0)
printf("The number is Negative");
else 
printf("The number is Zero");
    return 0;
}