
write a programe that "Sum+Minus+Division+Multipilication+Reminder" at a time
*/
#include<stdio.h>
int main
 {
    int num1,num2,result;
    printf("Enter two numbers;");
    scanf("%d %d",&num1,&num2);
    result = num1 + num2;
    printf("sum=%d\n",result);
    result = num1 - num2;
    printf("sub=%d\n",result);
    result = num1 * num2;
    printf("Multipilication=%d\n",result);
    result = num1 / num2;
    printf("Division=%d\n",result);
    result = num1 %  num2;
    printf("sum=%d",result);
    return 0;

}

