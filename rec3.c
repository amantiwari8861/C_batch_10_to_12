3#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("enter the no. of term of fibonnaci series with recursion \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int term=fib(i);
        printf("%d \t",term);
    }
    return 0;
}
int fib(int num)
{
    if(num<=1)
    {
        return num;
    }    
    else{
        return (fib(num-1)+fib(num-2));
    }
}