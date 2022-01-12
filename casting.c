#include<stdio.h>

int main()
{
	char check[8];
	int i,Acount,acount,scount,Ncount;
	for(i=0;i<8;i++)
	{
		if(check[i]>=48 && check[i]<=57)
		{
			Ncount++;
		}
		else if(check[i]>=97 && check[i]<=122)
		{
			acount++;
		}
		else if(check[i]>=65 && check[i]<=90)
		{
			Acount++;
		}
		else
		{
			scount++;
		}
	}
	printf("Acount=%d,acount=%d,scount=%d,Ncount=%d\n",Acount,acount,scount,Ncount);
	 
	 return 0;
}
