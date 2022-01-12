#include<stdio.h>

int main()
{
    float amount,netamount,discount;
    printf("enter the amount \n");
    scanf("%f",&amount);

    // amount<1000  2% discount
    // amount<5000  10% discount
    // amount>10000  50% discount
    if(amount<=1000 && amount>=0)
    {
        discount=(amount*2)/100;
        netamount=amount-discount;
        printf("you got 2%% discount of %0.2f \n and total amount is %0.2f  \n",discount,netamount); 
    }
    else if(amount>5000 && amount<10000)
    {
        discount=(amount*10)/100;
        netamount=amount-discount;
        printf("you got 10%% discount of %0.2f \n and total amount is %0.2f  \n",discount,netamount); 
    }
    else if (amount>10000)
    {
        discount=(amount*50)/100;
        netamount=amount-discount;
        printf("you got 50%% discount of %0.2f \n and total amount is %0.2f  \n",discount,netamount); 
    }
    else
    {
        printf("noo discount available \n");
    }
    return 0;
}