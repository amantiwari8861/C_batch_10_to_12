#include<stdio.h>
int sum(int a,int b); //declaration
int main()
{
	int a=10,b=20,c;
	
	c=sum(a,b);
	printf("th sum is %d ",c);
	return 0;
}

int sum(int a,int b)
{
	return a+b;
	
}


