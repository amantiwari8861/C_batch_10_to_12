#include<stdio.h>
int main()
{
	int age;
	char ch;
	printf("enter age \n");
	scanf("%d",&age);
	scanf("%c",&ch);
	if(age>=0 && age<=150)
	{
		printf("valid age \n");
		if(age>0 && age<10 )
		{
			printf(" infant baby\n");
		}
		else if(age>10 && age<20)
		{
			if(age==18)
			{
				printf("18 year old\n");
			}
			printf("teen \n");
		}
		else 
		{
			printf("senior citizen \n");
		}
	}
	else
	{
		printf("invalid age !");	
	}
	return 0;
}