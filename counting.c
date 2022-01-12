#include<stdio.h>

void counting(int num)
{
    if(num<10)
    {
        printf("num = %d \t",num);
        counting(num+1);
    }
}

int main()
{
    int num=1;
    counting(num);
    return 0;
}