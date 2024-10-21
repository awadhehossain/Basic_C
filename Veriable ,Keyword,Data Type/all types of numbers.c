/*
Write a programe that prins all types of numbers
such as:integer,float,double,character
*/#include<stdio.h>
int main()
{
    int Num1=23;
    float Num2=1.23;
    double Num3=6.6365765446;
    char Ch='a';
    printf("Num1 is %d\n",Num1);
    printf("Num2 is %.2f\n",Num2);
    /*How many numbers you want to prints after desimal point include it after % symbol . How many you wants
    such as :you want to print 2 numbers after decimal points then type %.2f
    */
    printf("Num3 is %.10lf\n",Num3);
    printf("Chracter is %c",Ch);
    return 0;
}
