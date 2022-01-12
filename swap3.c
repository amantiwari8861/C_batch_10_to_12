#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a and b \n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("value of a = %d and b= %d \n",a,b);
    return 0;
}
