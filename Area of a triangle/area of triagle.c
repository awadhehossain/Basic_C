#include<stdio.h>
int main()s
{
    float base,hight,area;


    printf("Enter the base of the triangle :");
    scanf("%f",&base);

    printf("Enter the hight of the triangle :");
    scanf("%f",&hight);

    area =(float)1/2*base*hight;//type casting.

    printf("The area of the triangle is: %.3f",area);
    getch();


}
