#include<stdio.h>
int abc();
    int a=20;
int main()
{
    printf("the value of main a= %d ",a);
    abc();
    return 0;
}
int abc()
{

    printf("the value of a is %d \n",a);
}