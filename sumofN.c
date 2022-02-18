#include<stdio.h>
int main()
{
    int n;
    printf("enter the number  :");
    scanf("%d",&n);//let n=10

    int sum=0,i;
    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("the sum of first %d digit = %d \n",n,sum);

    return 0;
}
