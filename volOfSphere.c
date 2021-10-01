#include<stdio.h>
int main()
{
    float r,pi=3.14,result=0;
    printf("enter the Radius \n");
    scanf("%f",&r);
    if (r>0)
    {
        // result=4/3*pi*r*r*r; //error in output
        // result=4.0/3.0*pi*r*r*r; 
        // result=(4*pi*r*r*r)/3; 
        result=(float)4/3*pi*r*r*r; 
        printf("the result is %f \n",result);
    }
    else
    {
        printf("pls enter the valid no. \n");
    }
    return 0;
}
