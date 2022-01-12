#include<stdio.h>
int main()
{
	int age;
	printf("enter the age \n");
	scanf("%d",&age);
	
	if(age>=0 && age<=15 )
	{
		printf("infant baby\n");
		if(age==5)
		{
			printf("the age is 5\n");
		}
		if(age>4)
		{
			printf("greater than 4\n");
		}
		if(age==11)
		{
			printf("the age is 11\n");
		}
		if(age==3)
		{
			printf("the age is 3\n");
		}	
	}
	return 0;
}