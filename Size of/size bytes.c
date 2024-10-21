/*
Write a programe that shows data size
*/
#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    printf("Size of integer = %d bytes\n",sizeof(i));
    printf("Size of float = %d bytes\n",sizeof(f));
    printf("Size of double = %d bytes\n",sizeof(d));
    printf("Size of character = %d byte\n",sizeof(c));
    return 0;
}
