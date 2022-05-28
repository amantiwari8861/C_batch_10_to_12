#include<stdio.h>
int myfxn();
int main()
{
    int result=myfxn();
    printf("result is %d",result);
    return 0;
}
int myfxn()
{
    return 59;
}