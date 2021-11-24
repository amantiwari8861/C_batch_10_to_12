#include<stdio.h>

int main()
{
    //volume of sphere : 4/3 pi r^3
    float pi=3.14,r,result=0;

    printf("enter radius :");
    scanf("%f",&r);

    // result=4/3*pi*r*r*r;
    // result=(4*pi*r*r*r)/3;
    result=4.0/3.0*pi*r*r*r;
    printf("the result is %0.2f \n",result);
    return 0;
}
