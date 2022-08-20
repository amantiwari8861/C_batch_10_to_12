#include<stdio.h>

int main()
{
    int num,count=0;
    printf(" enter a number :");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        if (num%i == 0)
        {
            printf(" %d / %d is not a prime number \n",num,i);
            count++;
        }
        if (count>2)
        {
            break;
        }
        
    }
    
    if ((count>2))
    {
        printf(" not a prime number \n");
    }
    else
    {
        printf("prime number \n");
    }
    
    



    return 0;
}
