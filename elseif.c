#include<stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    if (num <12)
    {
        printf("less than 12 yr \n");
    }
    else if (num<18)
    {
        printf("less than 18 \n");
    }
    else if(num==18)
    {
        printf("equal to 18 \n");
    }
    else
    {
        printf("greater than 18 \n");
    }
    return 0;
}
