#include<stdio.h>
int main()
{
    int x,y,result1,result2;
    printf("Enter any number:");
    scanf("%d",&x);
    result1 = +x;//Unary plus
    printf("Result = %d\n ",result1);
    printf("Enter any number:");
    scanf("%d",&y);
    result2 = -y;//Unary minus
    printf("Result = %d ",result2);



   return 0;
}
