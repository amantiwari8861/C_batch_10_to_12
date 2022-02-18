#include<stdio.h>

int main()
{
    int age;
    printf("enter the age :");
    scanf("%d",&age);

    if (age>0 && age<=150)
    {
        printf("this is a valid age !\n");
        if (age>18)
        {
            printf("u r ready to vote !\n");
            if (age>=60)
            {
                printf("congrats u got 500rs reward\n");
            }
        }
        else if (age==18)
        {
            printf("congratulations! for 1st time vote \n");
        }
        else
        {
            printf("1 years to 17 years kids not allowed\n");
        }
    }
    else
    {
        printf("not a valid age !");
    }
    
    



    return 0;
}
