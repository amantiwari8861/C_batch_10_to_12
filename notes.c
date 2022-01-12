/*c intro history 
variables 
data types
operators
conditional statements (if,if-else,switch,else-if ladder)*/
#include<stdio.h>
int main()
{
    int amount;
    int rs500=0,rs2k=0,rs100=0,rs50=0,rs10=0,rs5=0;
    printf("enter the amount \n");
    scanf("%d",&amount);//5000
    if(amount>2000)
    {
        rs2k=amount/2000; //2
        amount=amount-rs2k*2000; //5000-2*2000 ==> amount=1000
    }
    if(amount>500)
    {
        rs500=amount/500; // rs500=1000/500 ==>2
        amount=amount-rs500*500; // amount=1000-2*500 ==>0
    }
    if(amount>50)
    {
        rs50=amount/50;
        amount=amount-rs50*50;
    }
    if(amount>500)
    {
        rs100=amount/100;
        amount=amount-rs100*100;
    }
    if(amount>10)
    {
        rs10=amount/10;
        amount=amount-rs10*10;
    }
    if(amount>5)
    {
        rs5=amount/5;
        amount=amount-rs5*5;
    }

    printf("the no. of 2000 notes is %d \n ",rs2k);
    printf("the no. of 500 notes is %d \n ",rs500);
    printf("the no. of 100 notes is %d \n ",rs100);
    printf("the no. of 50 notes is %d \n ",rs50);
    printf("the no. of 10 notes is %d \n ",rs10);
    printf("the no. of 5 notes is %d \n ",rs5);
    return 0;
}