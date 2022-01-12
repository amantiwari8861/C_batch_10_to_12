#include<stdio.h>

int rec(int num)
{

    if(num==0)
    return 1;
    
    printf("the num %d \n",num);
    rec(num-1); 
}

int main()
{
    int num=100;
    rec(num);
    return 0;
}