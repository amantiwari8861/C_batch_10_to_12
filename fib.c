#include<stdio.h>

int main()
{
    int n,first_term=0,second_term=1,next_term,i;
    printf("enter the no. of steps fibonnaci series :");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("invalid list size \n");
    }
    else if(n==1)
    {
        printf("%d",first_term);
    }
    else
    {
        printf(" \n %d %d ",first_term,second_term);
        for(i=0;i<n-2;i++)
        {
            next_term=first_term+second_term;
            printf("  %d",next_term);
            first_term=second_term;
            second_term=next_term;
        }
    }
    return 0;
}