#include<stdio.h>

int main()
{
    int num1;
    printf("enter a number :");
    scanf("%d",&num1);

    if (num1>0 && num1<100)
    {
        printf("between 0 and 100 \n");
    }
    else
    {
        printf("not between 0 and 100 \n");   
    }
    
    


    return 0;
}
