/*
Writa a programe that prints all kinds of numbers
Integer,float,Double,Character.
Hybrid
*/#include<stdio.h>
int main()
{
    int NUM1=23,NUM2=34;
    float NUM3=1.566,NUM4=76.678;
    double NUM5=45.6789448577,NUM6=23.4788567859;
    char FIRST='a',SECOND='b';
    printf("Integer numbers are %d,%d\n",NUM1,NUM2);
    printf("Float numbers are %.3f,%.3f\n",NUM3,NUM4);
    printf("Double numbers are %.10lf,%.10lf\n",NUM5,NUM6);
    printf("Characters are %c,%c",FIRST,SECOND);

}
