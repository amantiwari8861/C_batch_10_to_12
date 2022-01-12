#include<stdio.h>
int main()
{
	int amount,discount,total;
	printf("enter the amount \n");
	scanf("%d",&amount);
    if(amount>1000)
		{
		discount=(amount*2)/100;
		printf("the total amount of discount is %d \n",discount);
		total = amount-discount;
		}
	else if(amount>5000)
	{
		discount=(amount*50)/100;
		printf("the total amount of discount is %d \n",discount);
		}
	else if(amount>10000)
		{
		discount=(amount*20)/100;
		printf("the total amount of discount is %d \n",discount);
		}
	else if(amount>100000)
	{
		discount=(amount*90)/100;
		printf("the total amount of discount is %d \n",discount);
		
	}
    else
    {
        printf("no discount \n");
    }
    
	return 0;
}