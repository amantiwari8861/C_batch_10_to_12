#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
}obj1,obj2;

int main()
{
    printf("enter the id of 1st\n");
    scanf("%d",&obj1.id);
    printf("enter the id of 2nd\n");
    scanf("%d",&obj2.id);
    printf("enter the name of 1st\n");
    scanf("%s",&obj1.name);
    printf("enter the name of 2nd\n");
    scanf("%s",&obj2.name);
    printf("enter the salary of 1st\n");
    scanf("%f",&obj1.salary);
    printf("enter the salary of 2nd\n");
    scanf("%f",&obj2.salary);
    printf("the id of 1st is %d\n",obj1.id);
    printf("the id of 2nd is %d\n",obj2.id);
    printf("the name of 1st is %s\n",obj1.name);
    printf("the name of 2nd is %s\n",obj2.name);
    printf("the salary of 1st is %f\n",obj1.salary);
    printf("the salary of 2nd is %f\n",obj2.salary);
}
