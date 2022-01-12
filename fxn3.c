#include<stdio.h>
int add();
int main()
{
    int c=add(); //calling
    printf("the value of c is %d \n",c);
    return 0;
}
int add()
{
    // 2. no argument with return type.
    int a=50,b=30;
    printf("hello i am add fxn \n");   
    return a+b;
}
