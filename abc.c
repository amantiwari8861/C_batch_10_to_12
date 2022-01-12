#include<stdio.h>

int main()
{
    int amount,disc,net;
    printf("enter amount:");
    scanf("%d",&amount);

    if((amount>10000) && (amount<20000))
    {
        disc=(amount)/10;
        net=amount-disc;
        printf("%d",net);
    }
    else if(amount>5000 && amount<10000)
    {        
        disc=(amount*7)/100;
        net=amount-disc;
        printf("%d",net);
    }
    else if(amount>1000 && amount<5000)
    {       
        disc=(amount*5)/100;
        net=amount-disc;
        printf("%d",net);
    }
    else
    {
        printf("no discount available now !");
    }
	
    return 0;
}