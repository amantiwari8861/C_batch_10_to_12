#include<stdio.h>
int add(int a,int any);
int main()
{
    int a=10,b=20;
    // 4. with argument & return type.
    int sum=add(a,b); //calling
    printf("the sum is %d \n",sum);
    return 0;
}
int add(int a,int any)
{
    printf("hello i am add fxn \n");   
    int c=a+any;
    return c;
 }