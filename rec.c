#include<stdio.h>
int fib();
int main()
{
    int n;
    printf("enter the no. of term of fibonnaci series with recursion \n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("0");
    }
    else if(n>1)
    {
        int first_term=0,second_term=1,next_term;
        printf("\t %d",first_term);
        printf("\t %d",second_term);
        for(int i=0;i<n-2;i++)
        {
            next_term=first_term+second_term;
            printf("\t%d",next_term);
            first_term=second_term;
            second_term=next_term;
        }
    }
    else
    {
        printf("enter a valid input \n")  ;  
    }
    return 0;
}
//recursion
//user defined matrix