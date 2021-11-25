#include<stdio.h>
int main()
{
    int num;
    printf("enter the num \n");
    scanf("%d",&num);
    // if(num==18)//true block
    if(  num>=50  && num<=80  )
    {
        // printf("less than 18 \n");
        printf("between 50 and 80 \n");
    }
    else
    {
        printf("not between 50 and 80 \n");
    }
    
    printf("after if code \n");
    return 0;
}