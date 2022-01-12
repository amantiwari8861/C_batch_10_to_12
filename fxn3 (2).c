#include<stdio.h>
// int add(int ,int,int );
// void add(int b);
int add(int a,int b,int c)
{
    c=a+b;
    return c;
}
int main()
{
      int a=10,b=20,c;
   int result= add(a,b,c);
   printf("th result is %d \n ",result);
    return 0;
}