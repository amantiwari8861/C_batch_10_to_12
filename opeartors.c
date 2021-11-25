#include<stdio.h>

int main()
{
    // logical operators

    int result;
    // result=20>10 && 30<50;
    // result=!(20>10 || 70<50);
    // result=30 != 30;
    result=30<50 &&( 30>70 || 50>80);


    printf("result : %d ",result);

    return 0;
}
