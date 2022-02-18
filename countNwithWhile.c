#include<stdio.h>

int main()
{
    //count number of digits using while loop
    /* syntax : 
                while(condition)
                {
                    statements
                }
    */
   int digit,count=0;
    printf("enter the number  :");
    scanf("%d",&digit);//let digit=567321

    while(digit != 0)
    {
        digit=digit/10;
        count++;
    }
    printf("the number of digit = %d \n",count);
    return 0;
}
