#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if(marks>100 || marks<0)
        printf("This marks do not exist");
    else if(marks>=33)
        printf("Congratulation.You are pass");
    else
        printf("You are fail.Better luck next time");

    return 0;
}
