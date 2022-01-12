#include<stdio.h>
struct address
{
    int pincode;
    char city[20];
};
struct emp
{
    int id;
    char name[20];
    struct address addrobj;
};
int main()
{
    struct emp obj1[100];
    struct emp *ptr;
    ptr=&obj1[0];
    // *(ptr+i)=&obj1[i];
    // scanf("%d",&ptr->addrobj.pincode);

    printf("enter the id \n");
    // scanf("%d",&obj1[0].id);
        scanf("%d",&ptr->id);
    printf("enter the name \n");
    fflush(stdin);
    scanf("%[^\n]s",&obj1[0].name);
    fflush(stdin);
    printf("enter the city \n");
    scanf("%[^\n]s",&obj1[0].addrobj.city);
    printf("the name is %s and id is %d and city is %s \n",obj1[0].name,obj1[0].id,obj1[0].addrobj.city);
    return 0;
}