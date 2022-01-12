#include<stdio.h>
int main()
{
    int age;
    printf("enter ur age \n");
    scanf("%d",&age);
    if(age>18)
    {
        printf("the age is equal or more than 18 \n");
    }
    else if (age==18)
    {
        printf("18 yr old \n");
    }
    else
    {
        printf("age is not greater and equal to 18 \n");
    }
    
    /*if(age==18)
    {
        printf("age is equal to 18 \n");
    }
    if(age!=18)
    {
        printf("age is not equal to 18 \n");
    }*/
    return 0;
}
//conditional constructs
/*
    if
    if else
    else-if (ladder)
    switch
     syntax:
    if(condition)   //true block
    {
        //statements
    }
*/
