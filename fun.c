#include<stdio.h>
void add();

int main()
{
	printf("in main function \n");
	
	add();// calling of add function
	add();// calling of add function
	add();// calling of add function
	add();// calling of add function
	add();// calling of add function
	add();// calling of add function
	add();// calling of add function

	return 0;
}

void add()
{
	int a,b,c;
	printf("enter values\n");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a+b;
	printf("%d ",c );
	
}