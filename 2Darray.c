#include<stdio.h>
int main()
{
    int matr[2][3][2];
    // printf("enter the details \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("\nenter details of country %d and state %d and city %d :",i,j,k);
                scanf("%d",&matr[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("\nthe case at country %d and state %d and city %d  is %d \n",i,j,k,matr[i][j][k]);
            }
        }
    }
    return 0;
}