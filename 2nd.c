#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a=10,b=20;   
    int result=add(a,b);
    printf("result =  %d \n",result);
    return 0;
}
