#include<stdio.h>
int main()
{
    //1. if  2. if-else 3. elseif(ladder)   4.nested if
    int age;
    printf("enter the age :");
    scanf("%d",&age);

    /* if (age>=18) //true block
    {
        printf("you are ready to vote !\n");
    }
    printf("after if code "); */
/* 
    if (age>=18) //true block
    {
        printf("you are ready to vote !\n");
    }
    else
    {
        printf("you r not ready to vote \n");
    } */
    if (age>18)
    {
        printf(" u r ready to vote ! \n");
    }
    else if (age==18)
    {
        printf("congrats ! for 1st time vote \n");
    }
    else if (age >16)
    {
       printf("teenagers pls wait for some time \n");
    }
    // .
    // .
    else
    {
        printf("you r not ready to vote !\n");
    }
    
    
    



    printf("after if code ");

    return 0;
}
