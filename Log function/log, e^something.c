#include<stdio.h>
int main()
{
    double a,b,c,result;

    printf("Enter any number for log(something):");
    scanf("%lf",&a);
    result = log(a);
    printf("log(%lf)= %lf\n",a,result);

    printf("Enter any number for log10(something):");
    scanf("%lf",&b);
    result = log10(b);
    printf("log10(%lf)= %lf\n",b,result);

    printf("Enter any number for exp(something):");
    scanf("%lf",&c);
    result = exp(c);
    printf("exp(%lf)= %lf",c,result);




    getch();

}
