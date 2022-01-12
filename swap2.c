#include<stdio.h>

int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("the value after swapping in fxn is %d and %d \n",*a,*b);//20,10
    printf("the value after swapping in fxn is %d and %d \n",a,b);
}
int main()
{
    int a,b;
    printf("enter two no. \n");
    scanf("%d%d",&a,&b);//10,20
    printf("the value of a and b before swapping is %d and %d \n",a,b);
    printf("the value of a and b before swapping is %d and %d \n",&a,&b);
    swap(&a,&b);
    printf("a= %d and b= %d \n",a,b);//20,10
    return 0;
}