/*Write a programe that swap two numbers
 without temporary veriables*/
 #include<stdio.h>
 int main()
 {
      int num1=23,num2=67;

      num1 = num1 - num2;
      num2 = num1 + num2;
      num1 = num2 - num1;
      printf("num1=%d",num1);
      printf("num2=%d",num2);

         getch();
 }
