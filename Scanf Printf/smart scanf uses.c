/*
Write a programe that takes some number with smart way and print them
*/
#include<stdio.h>
int main()
{
    int num1,num2;
    float num3,num4;
    double num5,num6;
    printf("Enter two integer number:");
    scanf("%d %d",&num1,&num2);
    printf("Enter two float number:");
    scanf("%f %f",&num3,&num4);
    printf("Enter two double number:");
    scanf("%lf %lf",&num5,&num6);
    printf("The numbers are:%d %d %.3f %.5f %.8lf %.10lf",num1,num2,num3,num4,num5,num6);
    return 0;
}
