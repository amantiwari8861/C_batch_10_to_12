#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks : ");
    scanf("%d",&marks);

    if (marks>=80  && marks <=100)
    {
        printf("A Grade !");
    }
    else if (marks >=60 && marks<80)
    {
        printf("B grade !");
    }
    
    else if (marks >=50 && marks<60)
    {
        printf("C grade !");
    }
    
    else if (marks >=33 && marks<50)
    {
        printf("D grade !");
    }
    
    else if (marks >=0 && marks<33)
    {
        printf("Try again next time !");
    }
    else
    {
        printf("invalid marks!");
    }

    return 0;
}
