#include<stdio.h>
int main()
{
    int num=20;
    printf("the value after shifting binaries is %d \n",num<<3);
    printf("the value after shifting binaries is %d \n",num>>3);
    // 10 & 13 binary
    unsigned char num2,a=10,b=13;
    // printf("bitwise and & : %d  \n",10&13);
    printf("bitwise and & : %d  \n",a&b);
    // printf("bitwise or | : %d  \n",10|13);
    printf("bitwise or | : %d  \n",a|b);
    printf("bitwise not : %d  \n",num2=~10);
    return 0;
}

