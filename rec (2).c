#include<stdio.h>
int swap(int a)
{
    if(a>30)
    return 1;
    printf("%d \n",a);
    swap(a+2);
}
int main()
{
    int a;
    printf("enter the value of a \n");
    scanf("%d",&a);
    swap(a);
    return 0;
}