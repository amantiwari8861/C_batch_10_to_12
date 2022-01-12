#include<stdio.h>

struct students{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct students rohan,rohit;
    struct students st[50];
    scanf("%d",&st[24].id);
    printf("enter the id of rohan \n");
    scanf("%d",&rohan.id);
    printf("enter the id of rohit \n");
    scanf("%d",&rohit.id);
    printf("enter the name of rohit \n");
    fflush(stdin);
    scanf("%[^\n]s",&rohan.name);
    printf("enter the id of rohit \n");
    fflush(stdin);
    scanf("%[^\n]s",&rohit.name);
    fflush(stdin);
    return 0;
}