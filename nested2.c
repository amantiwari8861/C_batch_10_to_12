#include<stdio.h>

int main()
{
    int marks;
    printf("enter the marks \n");
    scanf("%d",&marks);

    if(marks>=0 && marks<=100 )
    {
        printf("valid marks \n");
        if(marks>=80 && marks<=100)
        {
            printf("A grade \n");

            if(marks>=90 && marks<=100)
            {
                printf("A1 Grade \n");
            }
            else
            {
                printf("A2 grade \n");
            }
        }
        else if(marks>=60 && marks<80)
        {
            printf("B grade \n");
            if(marks>=70 && marks<80)
            {
                printf("B1 Grade");
            }
            if(marks>=60 && marks<70)
            {
                printf("B2 Grade ");
            }
        }
        else if(marks>=50 && marks<60)
        {
            printf("C grade \n");
        }
        else
        {
            printf("fail!!!! better luck next time \n");
        }
    }
    else
    {
        printf("invalid marks ");
    }
    return 0;
}