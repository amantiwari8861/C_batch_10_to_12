#include<stdio.h>

int main()
{
    int marks;
    printf("enter ur marks : ");
    scanf("%d",&marks);
    
    if(marks >= 90   && marks<=100)
    {
        printf("A+");
    }
    else if(marks >= 80 && marks<=90)
    {
        printf("A");
    }
    else if(marks >= 70 && marks<=80)
    {
        printf("B+");
    }
    else if(marks >= 60 && marks<=70)
    {
        printf("B");
    }
    else if(marks >= 50 && marks<=60)
    {
        printf("C");
    }
    else if(marks >= 40 && marks<=50)
    {
        printf("D");
    }
    else if(marks >= 33 && marks<=40)
    {
        printf("E");
    }
    else if(marks >= 0 && marks<33)
    {
        printf("Fail !");
    }
    else
    {
        printf("invalid marks");
    }

    return 0;
}
