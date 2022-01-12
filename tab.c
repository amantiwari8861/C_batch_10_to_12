#include<stdio.h>

int main()
{
	int num,i,last;
	printf("enter the number for table \n");
	scanf("%d",&num);
	
	printf("enter the last digit \n");
	scanf("%d",&last);
	
	for(i=0;i<last;i++)
	{
		printf("  %d x %d =  %d \n",num,i+1,(num*(i+1)));
	}


	return 0;
}