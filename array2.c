#include<stdio.h>

int main()
{
	int  naam[5],i;
	
	printf("enter the value of naam \n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&naam[i]);
	}
	for(i=0;i<5;i++)
	{
	 printf("the value of naam[%d] = %d \n",i,naam[i]);	
	}
	
	// scanf("%d",&naam[0]);
	// scanf("%d",&naam[1]);
	// scanf("%d",&naam[2]);
	// scanf("%d",&naam[3]);
	// scanf("%d",&naam[4]);
	
	// printf("the value of naam[0] = %d \n",naam[0]);
	// printf("the value of naam[1] = %d \n",naam[1]);
	// printf("the value of naam[2] = %d \n",naam[2]);
	// printf("the value of naam[3] = %d \n",naam[3]);
	// printf("the value of naam[4] = %d \n",naam[4]);

	return 0;
}