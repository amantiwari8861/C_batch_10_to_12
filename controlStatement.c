#include<stdio.h>

int main()
{
    
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i==5)
    //     {
    //         // break;
    //         continue;
    //     }
    //     printf(" %d \n",i); 
    // }
    int i=0;
    for(;;)
    {
        printf(" %d \n",++i); 
        if (i==10)
        {
            break;
        }
    }

    return 0;
}
