#include<stdio.h>
int main()
{
/*  Every year that is exactly divisible by four is a leap year, except 
    for years that are exactly divisible by 100, but these centurial 
    years are leap years if they are exactly divisible by 400.
    For example, the years 1700, 1800, and 1900 are not leap years,
    but the years 1600,1924 and 2000 are . */
    // 1. year % 4 == 0 
    // 2. except year%100 == 0
    // 3 year % 400 == 0
    int year;
    printf("enter the year \n");
    scanf("%d",&year);
    if ( (year%4 == 0 && year%100 != 0 ) || (year%400 ==0) )
    {
        printf("leap year !\n");
    }
    else
    {
        printf("not a leap year \n");
    }
    return 0;
}