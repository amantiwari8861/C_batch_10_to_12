#include<stdio.h>

int main()
{
	int choice;
	printf("enter the choice \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("this is case 1");
		break;
		case 56:printf("this is case 56");
		break;
		case 3:printf("this is case 3");
		break;
		default:printf("invalid !");
	}
	
	return 0;
}