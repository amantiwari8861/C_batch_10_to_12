#include<stdio.h>

int main()
{
	char sign,temp;
	int num1=200,num2=30,result=0;
	
	// for(;;)
	while(1)  //infinite while loop
	{
		printf("enter the operation\n");
		scanf("%c",&sign);
		fflush(stdin);
		switch(sign)
		{
			case '+':   result=num1+num2;
					printf("the result is %d \n",result);
					break;
			case '-':   result=num1-num2;
					printf("the result is %d \n",result);
					break;
			case '*':   result=num1*num2;
					printf("the result is %d \n",result);
					break;
			case '/':   result=num1/num2;
					printf("the result is %d \n",result);
					break;
			default:printf("invalid operation \n");
		}
		printf("u want to continue if yes press y/Y  or  press N/n  \n");
		scanf("%c",&temp);
		fflush(stdin);
		if(temp=='N' || temp=='n')
		{
			printf("thanks for using my cdalculator! \n");
			break;
		}
	}
	return 0;
}