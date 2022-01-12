#include<stdio.h>
void add(int,int);
int main()
{
    int a=10,b=20;
    // 3. with argument no return type.
    add(a,b); //calling
    return 0;
}
void add(int a,int any)
{
    printf("hello i am add fxn \n");   
    int c=a+any;
    printf("the value of c is %d \n",c);
}