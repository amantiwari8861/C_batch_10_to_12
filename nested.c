#include<stdio.h>

int main()
{
    int age;
    printf("enter the age :");
    scanf("%d",&age);

    if (age >0 && age<150)
    {
        printf("valid age !\n");
        if (age>0 && age<14)
        {
            printf("kids are not allowed for vote \n");
        }
        else if (age>=14 && age<18)
        {
            printf("teenagers wait for 18 \n");
            if (age==17)
            {
                printf("wait for only 1 year \n");
            }
            
        }
        else if (age==18)
        {
            printf("congratulations for 1st time voting \n");
        }
        else
        {
            printf("you are ready to vote \n");
        } 
    }
    else
    {
        printf("invalid age \n");
    }
    
    


    return 0;
}
