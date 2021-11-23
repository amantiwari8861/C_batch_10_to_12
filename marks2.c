#include<stdio.h>

int main()
{
    float marks;
    printf("enter marks in percent :");
    scanf("%f",&marks);
    if(marks>=80 && marks<=100)
    {
        printf("A Grade !");
    }
    else if(marks>=60 && marks<80)
    {
        printf("B grade");
    }
    else if (marks>=50 && marks<60)
    {
        printf("C grade");
    }
    else if(marks>=33 && marks<50)
    {
        printf("just pass");
    }
    else if(marks>=0 && marks<33)
    {
        printf("fail ! try again later");
    }
    else
    {
        printf("invalid input !");
    }
    

    return 0;
}
