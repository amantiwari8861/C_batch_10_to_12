#include<stdio.h>

int main()
{
    char choice;
    printf("enter operation \n");
    scanf("%c",&choice);

    switch(choice)
    {
        case '+':printf("adding two no. \n");
            break;
            
        case '-':printf("subtract two no. \n");
            break;
            
        case '*':printf("multiply two no. \n");
            break;
            
        case '/':printf("divide two no. \n");
            break;
        default:printf("it's out of syllabus \n");
            break;
    }

    return 0;
}