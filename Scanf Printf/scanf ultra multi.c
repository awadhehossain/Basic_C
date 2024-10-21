/*
write a programe that takes some integers,float and double numbers and print them
*/
#include<stdio.h>
int main()
{
    int num1,num2;
    float num3,num4;
    double num5,num6;

    printf("Enter two integer two float two double :");
    scanf("%d %d %f %f %lf %lf",&num1,&num2,&num3,&num4,&num5,&num6);
    printf("Numbers are: %d,%d,%.3f ,%.5f,%.10lf,%.8lf",num1,num2,num3,num4,num5,num6);
    return 0;
}
