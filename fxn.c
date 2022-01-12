#include<stdio.h>

int main()
{
    int a=1000,b=200,c=30;

    if(a>b)
    {
        if(a>c)
        {
            printf("a is largest \n");
        }
        else
        {
            printf("c is largest \n");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is largest \n");
        }else{
            printf("c is largest \n");
        }
    }

    return 0;
}
