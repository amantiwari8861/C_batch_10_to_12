#include<stdio.h>
#include<string.h>

char school[]="Niit";

int main()
{
    //Array : homogenous collection of data
    // int arr[5]; -> 5 blocks of type int
    //structure : heterogeneous collection of data 
    struct Student
    {
        int id;
        char name[20];
        float fee;
    }stu1={101,"aman",1000},stu2={102,"rohit",5000}; //2nd method to declare variable(object)

    // struct Student stu1;//1st method
    // stu1.id=101;
    // stu1.name="Rohit"; //it will give error
    // strcpy(stu1.name,"Rohit");
    // printf("enter the name : ");
    // scanf("%[^\n]s",&stu1.name);// %s is string's format specifier(it will take input until space is not met)
    // and %[^\n]s is also a string's format specifier(it will take the string including space also)
    // printf("enter the fee : ");
    // scanf("%f",&stu1.fee);
    printf("the id is %d and name is %s and fee is %0.2f \n",stu1.id,stu1.name,stu1.fee);
    printf("school is %s ",school);

    printf("the id is %d and name is %s and fee is %0.2f \n",stu2.id,stu2.name,stu2.fee);


    return 0;
}
