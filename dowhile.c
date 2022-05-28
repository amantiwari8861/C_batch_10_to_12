#include<stdio.h>
int main()
{
	/*
	do
	{
		 code
	} while ( condition );
	*/
	//case 1: when condition is true
	/* int num=0;
	do{
		num++;
		printf(" %d \t",num);
	}while (num<=10); */
	//case 2: when condition is false
	int num=0;
	do{
		num++;
		printf(" %d \t",num);
	}while (num>=10);
	return 0;
}
// armstrong number
// 153 = 1^3 + 5^3 + 3^3 = 1*1*1 + 5*5*5 + 3*3*3 = 153
// 1234 -> reverse -> 4321 
// 12321 -> reverse -> 12321 palidrome
