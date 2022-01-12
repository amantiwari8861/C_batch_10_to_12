#include<stdio.h>
int func(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num>>=1;
    }
    return (count);
}
int main()
{
    int count2=func(125);
    printf("the value returned is %d \n",count2);
    return 0;
}