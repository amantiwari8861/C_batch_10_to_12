#include<stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);

    if (num<18)
    {
        printf("not ready to vote !");
    }
    else
    {
        printf("ready to vote !");
    }
    return 0;
}
