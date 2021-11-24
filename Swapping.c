#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter a and b :");
    scanf("%d%d",&a,&b); //10 20
    printf("the value of a= %d and b= %d before swap\n",a,b);

    /*c=a;
    a=b;
    b=c;*/
    a=a+b;  //a=30
    b=a-b; //10
    a=a-b; //20
    printf("the value of a= %d and b= %d \n",a,b);

    return 0;
}
