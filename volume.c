#include<stdio.h>
int main()
{
    float PI=3.14,r,volume;
    printf("enter the radius  : \n");
    scanf("%f",&r);

    // volume=4.0/3.0*PI*r*r*r;
    volume=(4*PI*r*r*r)/3;
    // volume=(float)4/3*PI*r*r*r;

    printf(" the volume is %.2f \n",volume);

    return 0;
}
