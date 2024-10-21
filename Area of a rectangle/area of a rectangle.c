//write a programme that calclute the area of a rectangle.
#include<stdio.h>
int main()
{
    float length,width,area;
    printf("Enter the value of length :");
    scanf("%f",&length);
    printf("Enter value of width:");
    scanf("%f",&width);
    area = length*width;
    printf("The area of the rectangle is :%f",area);
    return 0;
}
