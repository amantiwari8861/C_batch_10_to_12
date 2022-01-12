#include<stdio.h>
int main()
{
    int a=30,b=10,c=40;
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greatest\n");
        }
        else
        {
            printf("c is greatest\n");
        }
    }
    else if(b>c)
    {
        printf("b is greatest\n");
    }
    else
    {
        printf("c is greatest\n");
    }
    return 0;
}
