#include<stdio.h>
int main()
{
    char operation;
    printf("enter the operation :");
    scanf("%c",&operation);

    switch (operation)
    {
    case '+':
        printf("adding \n");
        break;
    case '*':
        printf("multiply \n");
        break;
    case '/':
        printf("divide \n");
        break;
    case '-':
        printf("subtract \n");
        break;
    case '%':
        printf("modulus \n");
        break;
    
    default:printf("invalid operation!");
        break;
    }


    return 0;
}