#include<stdio.h>
#include<math.h>
int main()
{
    // //function:it is a block of code which is used to perform a specific task
    // function has two types :
    // 1.pre-defined (library function)
    // 2.user defined (custom function)

    // pre-defined function:
    // 1.math.h
    // int num=5,power=4;
    // float result=pow(num,power);
    // printf("%f",result);
    int num,power;
    float result;
    printf("enter the number and power \n");
    scanf("%d%d",&num,&power);

    result=pow(num,power);
    // result=sqrt(4);
    printf("result :%f",result);

    return 0;
}
