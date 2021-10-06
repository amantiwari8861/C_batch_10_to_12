#include<stdio.h>
int main()
{
    char choice;
    int num,num2,result=0;
    printf("enter the operation :");
    scanf("%c",&choice);
    printf("enter the number \n");
    scanf("%d %d",&num,&num2);
    switch (choice)// int ,char 
    {
        case '+':
            result=num+num2;
                printf("the result is %d \n",result);
            break;
        case '-':
            result=num-num2;
                printf("the result is %d \n",result);
            break;
        case '*':
            result=num*num2;
                printf("the result is %d \n",result);
            break;
        case '/':
            result=num/num2;
                printf("the result is %d \n",result);
            break;
        case '%':
            result=num%num2;
                printf("the result is %d \n",result);
            break;
        default:printf("invalid operation !! \n");
            break;
    }


    return 0;
}
