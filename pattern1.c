#include<stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        //for space
        for (int j = 4; j >i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d",k+1);
        }
        printf("\n");
    }
    return 0;
}
