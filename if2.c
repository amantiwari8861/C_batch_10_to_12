#include<stdio.h>
int main()
{
	int num1,num2,c;
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		printf("num1 is greater\n");
	}
	else if(num1==num2)
	{
		printf("num1 is equal to num2 \n");
	}
	else
	{
		printf("num2 is greater\n");
	}
	
    return 0;
}
