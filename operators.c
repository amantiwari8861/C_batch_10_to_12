#include<stdio.h>
int main()
{
    int num1,num2,result=0;
    printf("enter the num1 and num2 \n");
    scanf("%d %d", &num1, &num2);
    // result=num1+num2;
    // result=num1-num2;
    // result=num1*num2;
    // result=num1/num2;
    result=num1%num2; //to find remainder
    printf("aman is %d ",result);
    return 0;
}
