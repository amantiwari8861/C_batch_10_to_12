#include<stdio.h>
#define MAX 30

struct employee
{
    int id;
    char name[MAX];
    float salary;
}e1,e2;
int main()
{
    struct employee e3,e4;

    printf("enter the employee id\n");
    scanf("%d",&e1.id);
    
    printf("enter the employee name\n");
    fflush(stdin);
    scanf("%[^\n]s",&e1.name);
    fflush(stdin);
    printf("enter the employee salary\n");
    scanf("%f",&e1.salary);
    
    printf("employee id is %d \n",e1.id);
    printf("employee name is %s \n",e1.name);
    printf("employee salary is %.2f \n",e1.salary);


    return 0;
}
