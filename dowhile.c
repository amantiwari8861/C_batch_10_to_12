#include<stdio.h>

int main()
{
	
	printf("do while example\n");
	int i=1;
	//for & while loop checks condition first if true then runs
	//but do-while loop first runs then checks condition  
/*
	case :1 when condition is true 
	do
	{
		printf("the value of i is %d \n",i);
		i++;
		
	}while(i<10);

*/
	//case 2: when condition is wrong
	do
	{
		printf("the value of i is %d \n",i);
		i++;
		
	}while(i>10);

	//1>10 false 
	
	return 0;
}

/*

h.w
1. print counting by 3 different loops 
2. make armstrong no. program by 3 different loops
3. palindrome (  12321 same from both sides   )
4. reverse a number 

*/