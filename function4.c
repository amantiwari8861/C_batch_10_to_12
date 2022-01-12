#include<stdio.h>
// int add(int t1,int t2);

int add(int t1,int t2)
{
    return t1+t2;
}

int main()
{
    int num1=10,num2=40;
    int abc=add(num1,num2);

    printf("the result is %d \n",abc);

    return 0;
}




// without arg with return type 