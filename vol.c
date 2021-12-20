#include<stdio.h>
int main()
{
    float radius,vol;
    printf("enter the radius :");
    scanf("%f",&radius);
    // vol=(4*3.14*radius*radius*radius)/3;
    vol=4.0/3.0*3.14*radius*radius*radius;
    printf("the volume of sphere is %f \n",vol);
    return 0;
}
