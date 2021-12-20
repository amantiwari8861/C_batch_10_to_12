#include<stdio.h>
int main()
{
    int a=10,b;
    printf("enter the values in int :");
    scanf("%d",&b);
    printf("a= %d & b= %d \n",a,b);

    float f=28.9,f2;
    printf("enter the values in float :");
    scanf("%f",&f2);
    printf("f= %f & f2= %f \n",f,f2);


    char ch='$',ch2;
    printf("enter the values in char :");
    fflush(stdin);
    scanf("%c",&ch2);
    printf("ch= %c & ch2= %c \n",ch,ch2);


    double d=123456,d2;
    printf("enter the values in double :");
    scanf("%lf",&d2);
    printf("d= %lf & d2= %lf \n",d,d2);

    return 0;
}
