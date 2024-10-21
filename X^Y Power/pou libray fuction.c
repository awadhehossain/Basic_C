//Write a programme that X^Y
#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter x =");
    scanf("%d",&x);

    printf("Enter y =");
    scanf("%d",&y);

   double result =pow(x,y);

   printf("Result = %.3lf",result);

    getch();
}
