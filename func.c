#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b,result=0;
    char ch;
    printf("enter choice \n");
    scanf("%c",&ch);
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case '+': printf("Adding the values ...... \n");
                result=sum(a,b);
        break;
         case '-': printf("subtracting the values ...... \n");
                result=sum(a,b);
        break;
        default:printf("invalid !\n");
    }
    printf("the result is %d ",result);
    return 0;
}
int sum(int a,int b)
{
    printf("hello i am sum function  \n");
    int c=a+b;
    printf("the sum of %d and %d is %d \n",a,b,c);
    return c;
}
int 