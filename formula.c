#include<stdio.h>

int main()
{
    float radius,height,result;
    float pi=3.14;
    printf("enter the value of radius and height \n");
    scanf("%f%f",&radius,&height);

    result= pi*radius*radius*height;
    printf("the result is %0.2f \n",result);

    return 0;
}