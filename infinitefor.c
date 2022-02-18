#include<stdio.h>
int main()
{
    int i,j;
    for(i=0,j=30; i<=j ;i++,j--)
    {
        printf("infinite loop %d %d \n",i,j);
    }
    return 0;
}