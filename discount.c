#include<stdio.h>

int main()
{
    double amount,disc,net;
    printf("enter amount:");
    scanf("%ld",&amount);

    if((amount>10000) && (amount<20000))
    {
        disc=(amount)/10;
        net=amount-disc;
        printf("%ld",net);
    }
    else if(amount>5000 && amount<10000)
    {        
        disc=(amount*7)/100;
        net=amount-disc;
        printf("%ld",net);
    }
    else if(amount>1000 && amount<5000)
    {       
        disc=(amount*5)/100;
        net=amount-disc;
        printf("%ld",net);
    }
    else
    {
        printf("no discount available now !");
    }
    return 0;
}