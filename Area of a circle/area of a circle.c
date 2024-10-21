//Write a programe that calculate the area of a circle.
#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter the value of the radius :");
    scanf("%f",&radius);
    area = 3.1416*radius*radius;
    printf("The area of the circle is :%.3f",area);



    getch();
}
