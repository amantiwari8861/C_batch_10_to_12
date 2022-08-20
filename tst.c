#include<stdio.h>
int main()
{
    
    // int num,temp;
    // for (;;)  //infinite for loop
    // {
    //     printf(" enter the %d number :",num);
    //     scanf("%d",&temp);
    // }

    int n=0,times,count=0;
    printf("enter times :");
    scanf("%d",&times);
    for (;;)
    {
        if (n%2 != 0)
        {
            printf(" %d ",n);
            count++;
        }
        if(times == count)
        {
            break;
        }
        n++;
    }
    
    return 0;
}
