#include<stdio.h> 

void fxn2(int num)
{
    printf("the number is %d\n", num);
    if(num<20)
    {
        fxn2(num+1);
    }
}
int main()
{
    int num1=1;

    fxn2(num1);
    return 0;
}
