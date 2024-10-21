/*
Write a programe that takes
an integer,float and double number and print them.
*/
#include<stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;

    printf("Enter one integer one float one double :");
    scanf("%d %f %lf",&num1,&num2,&num3);
    printf("Numbers are: %d,%.3f,%.10lf",num1,num2,num3);
    return 0;

}
