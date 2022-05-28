#include<stdio.h>
// int add(int,int);
int add(int num1,int num2);
int main()
{
    // there are 4 types of user defined functions:
    // 1. no argument no return type
    // 2. no argument with return type
    // 3. with argument no return type
    // 4. with argument with return type
    int num1,num2,sum;
    printf("enter the two numbers \n");
    scanf("%d%d",&num1,&num2);

    sum=add(num1,num2);
    printf("sum is %d",sum);
    return 0;
}
int add(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return sum;
}
