#include<stdio.h>
void add(int,int);
int main()
{
    //2.with arguments no return type 
    int a=10,b=20;
    add(a,b);
    return 0;
}
void add(int a,int b)
{
    printf("hello i am adding fxn %d + %d =  %d \n",a,b,a+b);
}