/*Write a programe that print the absulate value of a numbers.*/
#include<stdio.h>
int main()
{
    int a,result;
    printf("Enter any numbers:");

    scanf("%d",&a);
    result =abs(a);
    printf("The value of the numbers is :%d",result);
    getch();
}
