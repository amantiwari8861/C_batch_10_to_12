#include<stdio.h>

int fun()
{
    int a=10;
    static int b=20;
    a++;
    b++;
    printf("the value of a = %d b= %d \n",a,b);
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}