#include<stdio.h>
int main()
{
    printf("Enter your number:");
    int a;
    scanf("%d",&a);
    if(a>=33 && a<=100)
        {
           printf("Pass");
        }
        else if(a<0 || a>100)
        {
            printf("Invalid input.");
        }
    else 
        {
           printf("Fail");
         }
         return 0;
}  