#include<stdio.h>
struct Employee
{
    int empid;
    char name[30];
    float salary;
};
// }obj1,obj2;
int main()
{
    struct Employee obj1,ob3,ib6;
    printf("enter the empid of 1st \n");
    scanf("%d",&obj1.empid);
    printf("enter the name of 1st \n");
    scanf("%s",&obj1.name);
    printf("enter the salary of 1st \n");
    scanf("%f",&obj1.salary);
    /*printf("enter the empid of 2nd \n");
    scanf("%d",&obj2.empid);
    printf("the empid of 1st is %d \n",obj1.empid);
    */
    printf("the empid of 1st is %d \n",obj1.empid);
    printf("the name of 1st is %s \n",obj1.name);
    printf("the name of 1st is %.2f \n",obj1.salary);

    return 0;  
}