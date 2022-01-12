#include<stdio.h>

int main()
{
    //switch
    int day;
    printf("enter the day between 1 to 7 \n");
    scanf("%d",&day);

    if (day==1)
    {
        printf("today is sunday\n");
    }
    else if (day==2)
    {
        printf("today is monday\n");
    }
    else if (day==3)
    {
        printf("today is tuesday\n");
    }
    else if (day==4)
    {
        printf("today is wednesday\n");
    }
    else if (day==5)
    {
        printf("today is thursday\n");
    }
    else if (day==6)
    {
        printf("today is friday\n");
    }
    else if (day==7)
    {
        printf("today is satday\n");
    }
    else
    {
        printf("invalid day! \n");
    }
    



    return 0;
}