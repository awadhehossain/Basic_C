#include<stdio.h>
int main()
{
int a,b;
printf("Enter the first number : ");
scanf("%d",&a);
printf("Enter the second number : ");
scanf("%d",&b);
if(a>b)
printf("The large number is = %d",a);
else if(a<b)
printf("The large number is = %d",b);
else
printf("The numbers are equal");
    return 0;
}
