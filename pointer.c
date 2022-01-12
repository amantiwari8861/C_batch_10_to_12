#include<stdio.h>
int main()
{
    int var=50;
    printf("the value of var is %d \n",var); //50
    printf("the address of var is %d \n",&var);//6684188
    int *ptr;
    ptr=&var;
    int **ptr2;
    ptr2=&ptr;
    //  & (Ampersand) -> Address of
    // * (Asterik) -> value at address
    printf("the value in ptr pointer is %d \n",ptr); //
    printf("the value at address in ptr pointer is %d \n",*ptr);
    printf("the value at address in double pointer is %d \n",*ptr2);
    printf("the value at address in double pointer is %d \n",**ptr2);
    return 0;
}