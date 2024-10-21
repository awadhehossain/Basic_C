//Write a programe that shows the area of a triangle when it,s three sides length is given.
/*
s=(a+b+c)/2
Area=sqrt(s*(s-a)*(s-b)*(s-c))
*/
#include<stdio.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter the value of three sides:");
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c)/(float)2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf(" Area = %.3f",area);
    getch();
}
