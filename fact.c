#include<stdio.h>

int fact(int num)
{
    if(num==0 || num==1)
    return 1;
    else
    return num*fact(num-1);
}
int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    int result=fact(num);
    printf("the result is %d \n",result);
    return 0;
}