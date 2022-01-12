#include<stdio.h>
int main()
{
    int var=20;
    printf("the value in variable var is %d \n",var);
    int *ptr;
    ptr=&var;
    printf("the value in pointer ptr is %d \n",ptr); 
    printf("the value at address in pointer ptr is %d \n",*ptr);
    return 0;
}