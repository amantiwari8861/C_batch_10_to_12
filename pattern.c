#include<stdio.h>
int main()
{
	int i,j;
	printf("enter pattern element\n");


//	for(i=65;i<=70;i++)
//	{
//		for(j=70;j>=i;j--)
//		{
//			printf("%c ",j);
//		}
//		printf("\n");
//	}
	int var=65;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",var+j);
		}
		printf("\n");
	}
		return 0;
}
