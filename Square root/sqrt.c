//Write a programe that print the square root value.
#include<stdio.h>
int main()
{
    float num1;
    double result;
    printf("Enter any double number:");
    scanf("%f",&num1);
    result = sqrt(num1);
    printf("The square root value is:%.3lf",result);
    getch();
}

