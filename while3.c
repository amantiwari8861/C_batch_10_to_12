#include<stdio.h>

int main()
{
    // initialization , condition ,increment/decrement
    int i=100;


    while (i<20)
    {
        printf(" the value of i is %d \n",i);
        i++;
    }
    
    /* 153 = 1*1*1 + 5*5*5 + 3*3*3 => 153  armstrong no.

    153%10 => 3
    3*3*3 =27
    153/10 = 15

    15%10 =5
    5*5*5=125
    15/10=1

    1%10=1
    1*1*1=1
    1/10= 0

    */
    return 0;
}