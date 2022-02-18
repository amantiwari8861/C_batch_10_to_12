#include<stdio.h>

int main()
{
    int num1,num2,num3;
    printf("enter two values:\n");
    scanf("%d%d",&num1,&num2);
    printf("before swapping:\n");
    printf("num1= %d and num2= %d\n",num1,num2);
    printf("after swapping:\n");
    num3=num1;
    num1=num2;
    num2=num3;
    printf("num1= %d and num2= %d\n",num1,num2);
    return 0;
}
