#include<stdio.h>

int main()
{
    int num,num2;
    printf("enter two data :\n");
    // scanf("%d%d",&num,&num2);
    scanf("%d",&num);
    //num= -15;
    if (num>0 && num<150)
    {
        printf("in range");
    }
    else
    {
        printf("not in range");
    }
    

    return 0;
}
