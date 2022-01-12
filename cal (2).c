#include<stdio.h>
int add();
int sub();
int mul();
int div();
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':add();
				break;
		case '-':sub();
				break;
		case '*':mul();
				break;
		case '/':div();
				break;
			default:printf("invalid! ");
	}
	
	return 0;
}

int add()
{
	printf("add\n");
}
int sub()
{
	printf("add\n");
}
int mul()
{
	printf("add\n");
}
int div()
{
	printf("add\n");
}