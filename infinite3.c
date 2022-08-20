#include<stdio.h>
int main()
{
    int num=1;
    // for (;;)
    // {
    //     printf(" hiii  %d \n",num);
    //     num++;
    //     if (num==5)
    //     {
    //         break;
    //     }
        
    // }
    

    for (int j = 1; j <= 10; j++)
    {
        if (j==6 || j==7)  {            continue;        }
        printf(" j = %d \n",j);
    }
    
    return 0;
}
