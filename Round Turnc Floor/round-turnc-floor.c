#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,result;

    printf("Enter a number that you want to make round figure :");
    scanf("%lf",&a);
    result = round(a);
    printf("round(%lf)= %lf\n",a,result);

    printf("Enter a number that you want to make trunc figure :");
    scanf("%lf",&b);
    result = trunc(b);
    printf("trunc(%lf)= %lf\n",b,result);

    printf("Enter a number that you want to make floor figure :");
    scanf("%lf",&c);
    result = floor(c);
    printf("floor(%lf)= %lf\n",c,result);

    getch();

}
