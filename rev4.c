#include<stdio.h>
int add(int,int);
int main()
{
    //4.with arguments and return type 
    int a=10,b=20;
    int c=add(a,b);
    printf("hello i am main fxn %d \n",c);
    return 0;
}
int add(int a,int y)
{
    return a,y;
}