#include<stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i==5)
        {
            // printf("i = %d that's why breaking the loop \n",i);
            // break;
            printf("i = %d that's why skipping the loop \n",i);
            continue;
        }
        printf("%d\n",i);
    }
    

    return 0;
}
