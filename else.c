#include<stdio.h>
int main()
{
    int age;
    printf("enter the age \n");
    scanf("%d",&age);
    // if(age>=18)
    // {
    //     printf("ready to vote \n");
    // }
    // else
    // {
    //     printf("not ready to vote ");
    // }
    if(age>=0 && age<12)
    {
        printf("kids \n");
    }
    else if(age>=12 && age <18)
    {
        printf("teenager ");
    }
    else if(age==18)
    {
        printf("u r adult now ");
    }
    else if(age>=18 && age<40)
    {
        printf("uncle/aunty ");
    }
    else
    {
        printf("senior citizen ");
    }
    return 0;
}