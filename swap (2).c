#include<stdio.h>
int swap(int *c,int *d)
{
    char *ch;//define a pointer of type char
    int temp;
    temp=*c;
    // printf("the value of temp is %d \n",temp);
    *c=*d;
    *d=temp;
    printf("value in swap function a= %d b= %d \n",*c,*d);//20 10
}
int main()
{
    int a=10,b=20;
    printf("before calling a= %d b= %d \n",a,b); //10 20 
    swap(&a,&b);
    // printf("value after swap in main a= %d b= %d \n",a,b); //10 20 why ?
    printf("value after swap in main a= %d b= %d \n",a,b); //10 20 why ?
}