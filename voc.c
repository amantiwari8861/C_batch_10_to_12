#include<stdio.h>

int main()
{
    float pi=3.14,r,h,voc;
    printf("enter the height and radius ");
    // scanf("%f%f",&r,&h);
    scanf("%f",&r);

    // voc=pi*r*r*h;
    // voc=h*h + r*r +2*r*h ;
    // voc=4/3*pi*r*r*r; //error in value
    // voc=(4*pi*r*r*r)/3;
    voc=4.0/3.0*pi*r*r*r;

    printf("the volume is %0.2f ",voc);

    return 0;
}
