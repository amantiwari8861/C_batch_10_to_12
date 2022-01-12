#include<stdio.h>

struct Student
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct Student obj[100];
    for(int i=0;i<100;i++)
    {
    printf("enter the id of 1st\n");
    scanf("%d",&obj[i].id);
    printf("enter the name of 1st\n");
    scanf("%s",&obj[i].name);
    printf("enter the salary of 1st\n");
    scanf("%f",&obj[i].salary);
    }
    for(int i=0;i<100;i++)
    {
    printf("the id of 1st is %d\n",obj[1].id);
    printf("the name of 1st is %s\n",obj[i].name);
    printf("the salary of 1st is %f\n",obj[i].salary);
    }
    return 0;
}
