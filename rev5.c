#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("hello i am main fxn %d , %d \n",a,b);//10 20 
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("hello i am swap fxn %d , %d \n",*a,*b);//20 10 
}