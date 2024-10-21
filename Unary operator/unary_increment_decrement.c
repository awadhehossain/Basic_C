#include<stdio.h>
int main()
{
  int a=10;
   printf("%d\n",a);//a=10
   printf("%d\n",++a);//a=11
    printf("%d\n",a);//a=11
     printf("%d\n",a++);//a=11
      printf("%d\n",a);//a=12
       printf("%d\n",--a);//a=11
        printf("%d\n",a);//a=11
         printf("%d\n",a--);//a=11
          printf("%d\n",a);//a=10
           printf("%d\n",a++);//a=10
            printf("%d\n",a++);//a=11
             printf("%d\n",--a);//a=11
              printf("%d\n",++a);//a=12
               printf("%d\n",++a);//a=13
                printf("%d\n",a--);//a=13
                  printf("%d\n",++a);//a=13
                   printf("%d\n",a--);//a=13
                    printf("%d\n",a++);//a=12
                     printf("%d\n",a);//a=13
    return 0;
}
