/*Write a programme that find the large number among three numbers */

#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the first number : ");
scanf("%d",&a);

printf("Enter the second number : ");
scanf("%d",&b);

printf("Enter the third number : ");
scanf("%d",&c);

if(a>b && a>c)
printf("The large number is = %d",a);

else if(b>a && b>c)
printf("The large number is = %d",b);

else if(c>a && c>b)
printf("The large number is = %d",c);

else
printf("The numbers are equal");

getch();

if(a<b && a<c)
printf("\nThe small number is = %d",a);

else if(b<a && b<c)
printf("\nThe small number is = %d",b);

else
printf("\nThe small number is = %d",c);



    return 0;
}
