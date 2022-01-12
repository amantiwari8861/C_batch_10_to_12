#include<stdio.h>
int main()
{
    int num,n;
    printf("enter the number \n");
    scanf("%d",&num);
    printf("enter the value of n \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("  %d x %d = %d \n",num,i,num*i);
    }

    return 0;
}