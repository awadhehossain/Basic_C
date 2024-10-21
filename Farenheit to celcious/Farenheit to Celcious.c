////Write a programe that convert Farenheit to Celcious.
#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter the Farenheit temperature value:");
    scanf("%f",&F);
    C =((F-32)*5)/9;
    printf("TheCelcious treperature value is :%.4f",C);
    return 0;
}


