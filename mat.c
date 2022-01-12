#include<stdio.h>
#include<conio.h>
int main()
{
	int matA[3][3],matB[3][3],matC[3][3]={0};
	int i,j;
	printf("enter the value of 1st matrix\n");
	 for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	{
		scanf("%d",&matA[i][j]);
	}
	}
	printf("enter the value of 2nd matix\n");
	 for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	 {
	 	scanf("%d",&matB[i][j]);
	 }
	}
	 for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	 {
	 	matC[i][j]=matA[i][j]+matB[i][j];
	 }
	}
	printf("sum of given matrix is :\n");
	 for(i=0;i<3;i++)
	 {
	 for(j=0;j<3;j++)
	 {
	 	printf("\t%d",matC[i][j]);
	 }
	    printf("\n");
	 }
	 getch();
	return 0;
}

