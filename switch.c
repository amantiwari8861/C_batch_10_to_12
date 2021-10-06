#include<stdio.h>
int main()
{
    int choice;
    printf(" 1. start the game \n 2.go to settings \n 3.Quit \n");
    printf("enter the choice :");
    scanf("%d",&choice);
    switch (choice)// int ,char 
    {
        case 1:
            printf("Starting the game \n");
            break;
        case 2:
            printf(" Opening settings \n");
            break;
        case 3:
            printf("Quiting the game \n");
            break;
        default:printf("invalid input !! \n");
            break;
    }

    return 0;
}
