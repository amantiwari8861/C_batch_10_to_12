#include<stdio.h>
int main()
{
    int i,array[5];

    printf("enter the value \n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("the value of array[%d] = %d \n ",i,array[i]);
    }
    return 0;
}