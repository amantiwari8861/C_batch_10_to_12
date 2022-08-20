#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf(" remainder is %d \n",num%2);
    
    if (num%2  == 0)
    {
       printf("%d is even",num);
    }
    else
    {
        printf("%d is odd",num);
    }
    


    return 0;
}
