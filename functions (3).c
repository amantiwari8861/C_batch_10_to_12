#include<stdio.h>
int input(int ,int);
int main()
{
	
	int a,b,result1,result2,result3;
	result1=input(a,b);//56
	result2=input(a,b);//100
	result3=input(a,b);//46	
	printf("the result is %d \n",result1);
	printf("the result is %d \n",result2);
	printf("the result is %d \n",result3);
	return 0;
}
int input(int a,int b)
{
	// scanf("%d",&var);//56
	scanf("%d",&a);//56
	scanf("%d",&b);//56
	return a+b;
}