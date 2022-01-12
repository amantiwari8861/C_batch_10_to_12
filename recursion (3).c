#include<stdio.h>
int factorial(int num)
{
    int fact=1;
    if(num==1)
        return 1;
    else
    {
        fact= num*factorial(num-1);
        printf("fact = %d \n",fact);
        return fact;
    }
}
int main()
{
    int num=5;
    int result = factorial(num);
    printf("result = %d ",result);
    // recursion: when a funtion call it itself, it is called recursion.
    return 0;
}