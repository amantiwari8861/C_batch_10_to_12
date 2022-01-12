#include<stdio.h>
int main()
{
	int disc,amount,net;
	printf("enter the amount \n");
	scanf("%d",&amount);
	if(amount>50000)
	{
		disc=(amount*99)/100;
		printf("ur discount is %d \n",disc);
		net=amount-disc;
	}
	else if(amount>20000 && amount<50000)
	{
		printf("25% discount \n");
		disc=(amount*25)/100;
		net=amount-disc;
	}
	else
	{
		printf("no discount is available now !");
		net=amount;
	}
		printf("the net amount is %d \n",net);
	return 0;
}