#include<stdio.h>
#define pi 3.14
#define max 100
int main()
{
    //const float pi=3.14;
    //pi=56;
    //printf("%.2f\n",pi);

    for(int i=0;i<10;i++)
    {
        if(i==4)
        goto four;
       // continue;

        printf("%d\n",i);
    }
    four:
    printf("four found !\n");


    return 0;
}