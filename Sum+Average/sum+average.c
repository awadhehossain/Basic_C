/*
Write a programe
 that takes three numbers
  and shows the sum
  and also shows the average.
*/
#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;
    printf("Enter three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum = num1 + num2 + num3;
    printf("The sum is=%d\n",sum);
    avg =(float)sum/3;//type casting=Change one data type to another data type
    printf("Average=%.2f",avg);
    return 0;
}
