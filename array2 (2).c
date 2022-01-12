#include<stdio.h>
int main()
{
	char arr3[40];
	int i;
	//static array can't shrink and grow at runtime
	printf("enter ur name \n");	
	for(i=0;i<4;i++)
	{	
		scanf("%c",&arr3[i]);
		fflush(stdin);//to clear the buffer
	}
	// printf("the name is : ");
	for(i=0;i<4;i++)
	{
		printf("the value of arr3[%d] : %c\n",i,arr3[i]);
	}
	return 0;
}