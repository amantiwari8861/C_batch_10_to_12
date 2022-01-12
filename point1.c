#include<stdio.h>

int main()
{
    int a=30;
    int *abc;
    abc=&a;
    printf("the address of var is %d\n",&a);
    printf("the value of var is %d\n",a);
    printf("the address of pointer is %d\n",&abc);
    printf("the value of pointer is %d\n",*abc);
    printf("the value of pointer abc is %d\n",abc);
    printf("the value adsress of pointer abc is %d\n ",*abc);


    return 0;
}