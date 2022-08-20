#include<stdio.h>
int main()
{
/* 19. Write a program in C to calculate and print the Electricity bill of a given customer. The customer id, and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. The charge are as follow : 

Unit	Charge/unit
upto 199	@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above	@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-
 */

    float custid,unit,amount;
    printf("enter customer id : ");
    scanf("%f",&custid);

    printf(" unit consumed :");
    scanf("%f",&unit);

    if (unit >=0 && unit <200)
    {
        amount= unit * 1.20 ;
        if (amount < 100)
        {
            amount = 100;
        }
    }
    else if (unit >=200 && unit <400)
    {
        amount= unit * 1.50;
    }
    else if (unit >=400 && unit<600)
    {
        amount= unit * 1.80;
    }
    else
    {
        amount= unit * 2.0;
    }
    
    if (amount > 400)
    {
        float surcharge= (amount*15)/100;
        amount=    amount +  surcharge ;
        printf(" surcharge = %0.2f ",surcharge);
    }
    printf(" total  amount is : %0.2f ",amount);
    
    return 0;
}
