#include<stdio.h>
int main()
{
    // fibonnaci series
    // 0 1 1 2 3 5 8 13 21
    int first_num=0,second_num=1,result,n,i;
    printf("enter the no. of steps in series \n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("the series is : 0 \n");
    }
    else if(n==2)
    {
        printf("the series is : 0 1 \n");
    }
    else if(n>2)
    {
       printf("the series is : 0 1 ");
        for(i=0;i<n-2;i++)
        {
            result=first_num+second_num;
            printf("%d ",result);
            first_num=second_num;
            second_num=result;
        }
    }
    else{
        printf("invalid no.\n");
    }
    return 0;
}