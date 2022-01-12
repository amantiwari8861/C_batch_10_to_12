#include<stdio.h>
int main()
{
	char input[10];
	int i,Ncount,CAcount,SAcount,Scount;
	Ncount=CAcount=SAcount=Scount=0;
	printf("enter the character \n");
	
	for(i=0;i<10;i++)
	{
		scanf("%c",&input[i]);
		fflush(stdin);
	}
	
for(i=0;i<10;i++)
{
	if(input[i]>=48 && input[i]<=57)
	{
		Ncount++;
	}
	else if(input[i]>=65 && input[i]<=90)
	{
		CAcount++;
	}
	else if(input[i]>=97 && input[i]<=122)
	{
		SAcount++;
	}
	else
	{
		Scount++;
	}
}

printf("\
	Numeric = %d \n\
			Capital Alphabet = %d \n\
	Small      Alphabet = %d  \n\
					Special Character = %d \n\
	\n",Ncount,CAcount,SAcount,Scount);

	return 0;
}