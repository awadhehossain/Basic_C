//Write aprograme that convert Celcious to Farenheit .
#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter the Celcious temperature value:");
    scanf("%f",&C);
    F =(1.8*C)+32;
    printf("The Farenheit treperature value is :%.4f",F);
    return 0;
}

