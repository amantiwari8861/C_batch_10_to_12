#include<stdio.h>
int main()
{
    float r,pi=3.14,volume;
    printf("enter the radius :");
    scanf("%f",&r);
    // volume=4.0/3.0*pi*r*r*r;
    volume=(4*pi*r*r*r)/3;
    printf("the volume is %0.2f \n",volume);

    return 0;
}
