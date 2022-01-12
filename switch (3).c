#include<stdio.h>
int main()
{
    // nested 
    int age;
    printf("enter the age \n");
    scanf("%d",&age);

    if(age>=0 &&  age<=200)
    {
        printf("valid age \n");
        if(age>=0 && age<18)
        {
            printf("unable to vote \n");
        }
        else
        {
            printf("you can vote \n");
        }
    }
    else
    {
        printf("not a valid age \n");
    }
    return 0;
}