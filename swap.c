#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    printf("the value of a= %d and b= %d \n",a,b);
    //by 3rd variable
    // c=a;
    // a=b;
    // b=c;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a= %d and b= %d after swapping \n",a,b);
    return 0;
}
