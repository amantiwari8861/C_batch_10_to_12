#include<stdio.h>

struct emp
{
    int empid;
    char gender;
    char name[20];
    float salary;
}e1,e2;
int main()
{
    struct emp abc,xyz;
    printf("enter the value of employee \n");
    scanf("%d",&e1.empid);
    fflush(stdin);
    printf("enter the value of employee \n");
    scanf("%[^\n]s",&e1.name);
    fflush(stdin);

    printf("the employee id is %d \n",e1.empid);
    printf("the employee id is %s \n",e1.name);


    return 0;
}