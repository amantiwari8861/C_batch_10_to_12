#include<stdio.h>
void Addition();

int main ()
{
	printf("i am main fxn\n");
    Addition();
    printf("code after addition fxn\n");
    return 0;
}
void Addition()
{
    int a=10,b=20,c;
    c=a+b;
    printf("the sum of %d\n",c);
}