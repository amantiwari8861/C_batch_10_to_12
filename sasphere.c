#include<stdio.h>
int main()
{
    // surface area of sphere : 4*pi*r^2

    float r,sa;
    printf("enter radius :");
    scanf("%f",&r);

    sa=4.0*3.14*r*r;
    printf("surface area of sphere = %f",sa);

    return 0;
}
