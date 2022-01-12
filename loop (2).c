#include<stdio.h>

int main()
{
    int i;
    for(i=0; ;i++)
    {
        if(i==5)
        continue;

        printf("%d\t",i);

        if(i==50)
        {
            break;
        }
    }

    return 0;
}