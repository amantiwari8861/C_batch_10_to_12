#include<stdio.h>
void fib(int);

int main()
{
    int n;
    printf("enter the no. of term of fibonnaci series with recursion \n");
    scanf("%d",&n);
    fib(n);

    return 0;
}
void fib(int num)
{
    int next;
    if(num==1)
    {
        printf("0");
    }
    else if(num>1)
    {

        printf("0\t");
        printf("1\t");
        next=fib(num-2)+fib(num-1);
        fflush(stdin);
        printf("%d\t",next);
    }
    else
    {
        printf("invalid input \n");
    }
}