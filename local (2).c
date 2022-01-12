#include<stdio.h>
// int function(int);
int function();
int globalvar=50;
int main()
{
    printf("the value of global variable is %d \n",globalvar);
    // int c=20;
    // function(c);
    function();
    // printf("in main c = %d \n",c);
    // printf("%d",a);
    return 0;
}
// int function(int c)
int function()
{
    printf("the value of global variable is %d \n",globalvar);
    // c=c+10;
    // printf("in function c = %d \n",c);
    // int a=10;
    // printf("\n %d",a);
}