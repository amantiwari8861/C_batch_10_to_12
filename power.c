#include<stdio.h>
int main()
{
	int i,result=0,num,pow;
	printf("enter the number and power \n");
	scanf("%d%d",&num,&pow);
	result=num;
	for(i=1;i<pow;i++)
	{
		result=result*num;
	}
	printf("the result is %d \n",result);
	return 0;
}

/*
		LET num=5, pow=3; 
step 1: i=1 
		1<3  T 
		result=result*num;  result=5*5 =>25

step 2: i=2 
		2<3 T 
		result=result*num;   result=25*5; =>125	
		
step 3: i=3
		3<3 F LOOP TERMINATED 
		
*/