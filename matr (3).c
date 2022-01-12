#include<stdio.h>

int main()
{
    int age;
    printf("enter the bage \n");
    scanf("%d",&age);

    if(age>=0 && age<=150)
    {
        printf("valid age \n");
        if(age>=0 && age<18)
        {
            printf("you are under 18 \n");
            if(age>=12 && age<18)
            {
                printf("you are teenager \n");
            }
        }
        if(age==18)
        {
            printf("you are 18 \n");
        }
        else if(age>18 && age<=150)
        {
            printf("age is greater than 18 \n");
        }
        else{
            printf("age is not equal and greater than 18 \n");
        }
    }
    else{
        printf("not a valid age \n");
    }   

    return 0;
}