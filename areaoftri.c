// area of triangle : 1/2*base*height
#include <stdio.h>
#include<conio.h>
int main()
{
    float base,height,area;
    printf("enter base and height of triangle:\n");
    scanf("%f%f",&base,&height);// Ampersand(&) address of 
    // area=1/2*base*height;
    // area=(base*height)/2;
    // area=1.0/2.0*base*height; //best way
    area=0.5*base*height;
    printf("area of triangle is %0.2f sq.\n",area);
    getch();
    return 0;
}