#include<stdio.h>

int swap(int *c, int *d)
{
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
    printf("value is swap fxn a=%d\n b=%d\n",*c,*d);
}
int main()
{
    int a=10,b=20;
    printf("before calling a=%d\n and b=%d\n",a,b);
    swap(&a,&b);
    printf("value after swap in a=%d\n and b=%d\n",a,b);

    return 0;
}