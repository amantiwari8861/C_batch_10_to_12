#include<stdio.h>
int add(int a,int b,int c)
{
    c=a+b;
    return c;
}
int main()
{
    int a=10,b=20,c;
    int reslt=add(a,b,c);
    printf("the reslt is %d\n",reslt);
    return 0;
}