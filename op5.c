#include<stdio.h>
int main()
{
    int num,num2,result;
    printf("enter the numbers:");
    scanf("%d%d",&num,&num2);

    // result=num%num2;
    // printf("the remainder is:%d",result);

    num++;
    num2--;
    printf("the numbers after increment and decrement are:%d   %d",num,num2);

    return 0;
}