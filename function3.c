#include<stdio.h>
int add();
int main()
{
    int abc=add();
    printf("the result is %d \n",abc);

    return 0;
}

int add()
{
    int num1=10,num2=40,result;
    result=num1+num2;//50

    return result;
}


// without arg with return type 