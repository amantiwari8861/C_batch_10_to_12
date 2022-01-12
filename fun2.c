#include<stdio.h>
// return_type name(arguments);//declaration
int fun();//declaration
int main() //starting point of a program
{
    int d=10,e=20;
    printf("hi i am main\n");
   int result =d+e+ fun();//calling
    // fun();//calling
    printf("work done ! and result id %d \n",result);
    return 0;
}
int fun()
{
    int a,b,c;
    printf("hi i am fun2 \n");
    printf("enter value of a and b \n");
    scanf("%d %d",&a,&b);
    c=a+b;
    // printf("the result is %d\n ",c);
    return c;
}