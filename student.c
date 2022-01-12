#include<stdio.h>
struct student
{
    int roll_no;
    char name[30];
    int age;
};
int main()
{
    struct student stu[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter student %d details \n",i+1);
        printf("enter roll no. \n");
        scanf("%d",&stu[i].roll_no);
        fflush(stdin);
        printf("enter name \n");
        scanf("%[^\n]s",&stu[i].name);
        fflush(stdin);
        printf("enter age \n");
        scanf("%d",&stu[i].age);
        fflush(stdin);
    }
    for (int i = 0; i < 5; i++)
    {
        if (stu[i].roll_no==2)
        {
            printf("the student with roll no. 2 detail \n");
            printf("roll no : %d \n",stu[i].roll_no);
            printf("name : %s \n",stu[i].name);
            printf("age : %d \n",stu[i].age);
        }
    }
    return 0;
}