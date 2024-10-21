#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]<0)
        {
            array[i]=array[i]-1;
        }
        sum=sum+array[i];
    }
    printf("Sum=%d",sum);
    return 0;
}
