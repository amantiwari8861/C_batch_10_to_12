#include<stdio.h>

int main()
{
    int year;
    printf("enter the year \n");
    scanf("%d",&year);

    // if( year%100 ==0  )
    // {
    //     printf("the given year is leap year %d \n",year );
    // }
    // else  if( year%4 ==0  )
    // {
    //     printf("the given year is leap year %d \n",year );
    // } 
    // else if( year%400 ==0  )
    // {
    //     printf("the given year is leap year %d \n",year );
    // }
    // else
    // {
    //     printf("the given year is not leap year %d \n",year );
    // }
    if(year%100==0 || year%4==0 ||year%400==0)
    {
        printf("the given year is leap year %d \n",year );
    }


    return 0;
}