#include<stdio.h>
struct address
{
    int pincode;
    char city[20];
};
struct Employee
{
    int empid;
    char name[30];
    float salary;
    struct address obj8;
};
int main()
{
    struct Employee obj[100];

    scanf("%d",&obj[49].obj8.pincode);
    printf("%d",obj[49].obj8.pincode);

  /*  for(int i=0;i<2;i++)
    {
        printf("enter the empid of 1st \n");
        scanf("%d",&obj[i].empid);
        printf("enter the name of 1st \n");
        scanf("%s",&obj[i].name);
        printf("enter the salary of 1st \n");
        scanf("%f",&obj[i].salary);
    }
    for(int i=0;i<2;i++)
    {
        printf("the empid of 1st is %d \n",obj[i].empid);
        printf("the name of 1st is %s \n",obj[i].name);
        printf("the name of 1st is %.2f \n",obj[i].salary);
    }*/

    return 0;  
}