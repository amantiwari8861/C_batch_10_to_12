#include<stdio.h>

int main()
{
    // int num1,term;
    // printf("enter the num and term \n");
    // scanf("%d%d",&num1,&term);//2 5

    // for (int i = 1; i <= term; i++)
    // {
    //     printf(" %d X %d = %d \n",num1,i,num1*i);
    // }
    // printf("%d ",1%10);
    int num,rem,sum=0;

    printf("enter the number :");
    scanf("%d",&num);

    int originalno=num;
    // for(;num>0;)
    //initialization
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
        //inc /dec 
    }

    // printf("the result is %d \n",sum);

    if (sum==originalno)
    {
        printf("this is Armstrong no.");
    }
    else
    {
        printf("not a armstrong no.");
    }
    
    



    return 0;
}
