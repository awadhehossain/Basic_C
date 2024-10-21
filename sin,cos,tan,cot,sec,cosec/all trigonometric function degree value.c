#include<stdio.h>
int main()
{
   float degree,radian,result;
   const float PI = 3.14159;
   printf("Enter angle value in degree:");
   scanf("%f",&degree);
   radian = degree* (PI/180.0);

   result =sin(radian);
   printf("sin(%f)= %f\n",degree,result);

   result =cos(radian);
   printf("cos(%f)= %f\n",degree,result);

   result =tan(radian);
   printf("tan(%f)= %f\n",degree,result);

   result =1/sin(radian);
   printf("cosec(%f)= %f\n",degree,result);

   result =1/cos(radian);
   printf("sec(%f)= %f\n",degree,result);

   result =1/tan(radian);
   printf("cot(%f)= %f\n",degree,result);
    getch();
}
