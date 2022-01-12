#include<stdio.h>
int abc()
{
    printf("hello world \n");
    int a=10;
    static int b=20;
    a++;b++;
    printf("a= %d \t b=%d \n",a,b);
    
}
int main()
{
    abc();
    abc();
    return 0;
}