#include<stdio.h>

int main()
{
	char choice;
	printf("enter the choice \n");
	scanf("%c",&choice);
	int a=10,b=20,c;
	switch(choice)
	{
		case '+':printf("this is case A");
				c=a+b;
				printf("%d",c);
		break;
		case 'a':printf("this is case a");
		break;
		case 'Z':printf("this is case Z");
		break;
		case 'z':printf("this is case z");
		break;
		default:printf("invalid !");
	}
	
	return 0;
}