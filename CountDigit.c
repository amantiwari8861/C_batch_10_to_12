#include<stdio.h>
int main()
{
    int digit,count;
    printf("enter the number  :");
    scanf("%d",&digit);//let digit=567321

    for(count=0;digit != 0;count++)
    {
        digit=digit/10;
    }
    printf("the number of digit = %d \n",count);
    return 0;
}