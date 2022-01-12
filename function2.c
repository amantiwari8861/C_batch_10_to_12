#include<stdio.h>
void add(int,int);
int main()
{
    int num1=10,num2=20;

    add(num1,num2);

    return 0;
}

void add(int num1,int num3)
{
    int result=num1+num3;
    printf("the result is %d \n",result);

}


// with arg no return type 