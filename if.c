#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("enter ur age : ");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("you are eligible for vote !");
    }

    else
    {
        printf("u r not eligible !");
    }
    
    getch();
    return 0;
}
