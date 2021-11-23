#include<stdio.h>
int main()
{
    int age;
    printf("enter the age :");
    scanf("%d",&age);
    if (age>0 && age<100)
    {
        printf("valid age !\n");
        if (age<18)
        {
            printf("you r not ready to vote !\n");
            if (age<12)
            {
                printf(" u r a teenager \n");
            }
        }
        else if(age==18)
        {
            printf("welcome to vote first time \n");
        }
        else
        {
            printf("u r ready to vote \n");
        }        
    }
    else
    {
        printf("not a valid age !");
    }
    
    

    return 0;
}
