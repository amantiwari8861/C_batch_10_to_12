#include<stdio.h>
int main()
{
    int marks;
    printf("enter ur marks in %% \n");
    scanf("%d",&marks); 
    if(marks>=0 && marks<=100)
    {
        printf("you got valid marks \n");

        if (marks>=33 && marks<=100)
        {
           printf("you are passed !\n");

            if (marks>=80 && marks<=100)
            {
                printf("A grade !\n");
            }
            else if (marks>=60 && marks<80)
            {
                printf("B grade !\n");
            }
            else
            {
                printf(" pass kiya gaya hai jabardasti !\n");
            }
        }
        else
        {
            printf("try again !");
        }
        
    }

    return 0;
}