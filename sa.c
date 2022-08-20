#include<stdio.h>

int main()
{
    // surface area of cylinder => 2*pi*r*r+2*pi*r*h;
    float r, h, sa,pi=3.14;
    printf("Enter the radius :");
    scanf("%f",&r);
    printf("Enter the height :");
    scanf("%f",&h);

    sa=2*pi*r*r+2*pi*r*h;

    printf("The surface area of cylinder is : %f",sa);

    return 0;
}
