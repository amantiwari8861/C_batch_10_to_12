#include<stdio.h>
float volumeOfSphere(float); //declaration
int add(int,int);

int main()
{
    // printf(" the result at %f radius is %f \n",2.5,volumeOfSphere(2.5));
    // printf(" the result at %f radius is %f \n",12.0,volumeOfSphere(12.0));
    // printf(" the result at %f radius is %f \n",21.2,volumeOfSphere(21.2));
    // printf(" the result at %f radius is %f \n",4.0,volumeOfSphere(4.0));

    printf(" add of %d and %d is %d \n",10,32,add(10,32));
    printf(" add of %d and %d is %d \n",34,32,add(34,32));
    printf(" add of %d and %d is %d \n",76,32,add(76,32));
    printf(" add of %d and %d is %d \n",10,65,add(10,65));

    return 0;
}
float volumeOfSphere(float r)
{
    return 4.0/3.0*3.14*r*r*r;
}
int add(int a,int b)
{
    return a+b;
}