#include<stdio.h>
struct address
{
    int pincode;
    char city[10];
};
struct student
{
    int st_id;
    char name[50];
    struct address obj;
};
int main()
{
    struct student st,*ptr;
    ptr=&st;
   // st.obj.pincode;
        printf("enter the student id \n");
        scanf("%d",&ptr->st_id);
        printf("enter the pincode \n");
        scanf("%d",&ptr->obj.pincode);
        printf("the student id is %d \n",ptr->st_id);
        printf("the pincode is %d \n",ptr->obj.pincode);
    return 0;
}