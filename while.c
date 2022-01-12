#include<stdio.h>

int main()
{
	int num,original,rem,result=0;
	printf("enter the number to check \n");
	scanf("%d",&num); //assume num = 153 
	
	original=num;
	while(num!=0)
	{
		rem=num%10;
		result=result + rem*rem*rem;
		num=num/10;
	}
	if(original == result)
	{
		printf("%d is armstrong no. \n",original);
	}
	else
	{
		printf("not a armstrong no. \n");
	}
	return 0;
}
/*
	while(condition)
	{
		//statements
	}
	
*/




