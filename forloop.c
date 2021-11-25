#include <stdio.h>
int main()
{
    // for (initialization;condition;increment/decrement)
    // {
    /* code */
    // }
    /* for (int i = 0; i < 5; i++)
    {
        printf("hello %d \n",i);
    } */
    int sum = 0, times,num;
    printf("enter the nth term :");
    scanf("%d",&times);
    for (int i = 0; i < times; i++)
    {
        printf("enter the %dth term \n",i);
        scanf("%d",&num);
        sum =sum+num;
    }
    printf("the sum is %d \n",sum);
    return 0;
}
