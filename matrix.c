#include<stdio.h>
int main()
{
    int matr[3][4];
    // int matr[3][4]={
    //     {1,2,3,4},{5,6,7,8},{9,10,11,12}
    // };
    printf("enter the data in matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&matr[i][j]);
        }
    }
     printf("the data in matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\t%d",matr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
