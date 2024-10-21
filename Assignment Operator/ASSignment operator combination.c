#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,i,j;
    float g,h;

    printf("For a+b\n");
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    a+=b;
    printf("Result=%d\n",a);

    printf("For c-d\n");
    printf("Enter the first number :");
    scanf("%d",&c);
    printf("Enter the second number :");
    scanf("%d",&d);
    c-=d;
    printf("Result=%d\n",c);

     printf("For e*f\n ");
    printf("Enter the first number :");
    scanf("%d",&e);
    printf("Enter the second number :");
    scanf("%d",&f);
    e*=f;
    printf("Result=%d\n",e);

    printf("For g/h \n");
    printf("Enter the first number :");
    scanf("%f",&g);
    printf("Enter the second number :");
    scanf("%f",&h);
    g/=h;
    printf("Result=%f\n",g);

    printf("For Remainder \n");
    printf("Enter the first number :");
    scanf("%d",&i);
    printf("Enter the second number :");
    scanf("%d",&j);
    i%=j;
    printf("Result=%d\n",i);
    getch();
}
