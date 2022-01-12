#include<stdio.h>

int main()
{
	int i,j;
	int x=5,y=5;
	for(i=0;i<=x;i++)
	{
			for(j=0;j<x*2;j++)
			{
				if(j>=x && j<=y)
				{
					printf("*");
				}
				else
				{
					printf("7");
				}
			}
		x--;
		y++;
		printf("\n");
	}
	return 0;
}