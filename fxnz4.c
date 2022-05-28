#include<stdio.h>
void add(int,int);
int main()
{
    add(10,20);
    return 0;
}
void add(int a,int b)
{
    int c;
    c=a+b;
    printf(" c = %d ",c);
}
