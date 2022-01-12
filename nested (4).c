#include<stdio.h>

int main()
{
    int age;
    printf("enter the value of age \n");
    scanf("%d",&age);

    if(age>=0 && age<=150)
    {
        printf("this is a valid age \n");
        if(age>=18)
        {
            printf("u r ready to vote \n");
        }
        else{
            printf(" u r not ready to vote ");
        }
    }
    else
    {
        printf("not a valid age \n");
    }

    return 0;
}