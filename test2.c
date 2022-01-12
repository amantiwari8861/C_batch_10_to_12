#include<stdio.h>
change(int p, int *q)
{ 
    p=20;*q=30;
}
int main( )
{
    int m=10,n=15;
    change(m,&n);
    printf("%d %d",m,n);
    return 0;
}
