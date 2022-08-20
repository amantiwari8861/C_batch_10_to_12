#include<stdio.h>
int main()
{
    /* 24. Write a program in C to read any Month Number in integer and display
     the number of days for this month. 
    Test Data :
    7
    Expected Output :
    Month have 31 days */

    int month;
    printf("enter month number :");
    scanf("%d",&month);

    if (month >0 && month<=12)
    {
        if (month == 1 || month==3 ||month==5 ||month==7  ||month==8 ||month==10 ||month==12 )
        {
            printf("the month has 31 days ");
        }
        else if (month == 2)
        {
            printf(" the month has 28 or 29 days ");
        }
        else
        {
            printf(" the month has 30 days");
        }
    }
    else
    {
        printf(" invalid month !");
    }
   
    return 0;
}
