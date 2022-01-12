#include<stdio.h>
int main()
{
    int i,j;
    printf("\n\n\n");
    system("color 0a");
    for(i=0;i<10;i++)
    {
        for(j=0;j<20;j++)
        {
            if((i>=2 && i<4) && ((j>3 && j<8) || (j>11 && j<16)) )
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}