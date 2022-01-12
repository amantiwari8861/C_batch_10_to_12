#include<stdio.h>
int add();
int main()
{
    //3.no arguments with return type 
    printf("hello i am main fxn %d \n",add());
    return 0;
}
int add()
{
    int a=10,b=20;
    return a+b;
}