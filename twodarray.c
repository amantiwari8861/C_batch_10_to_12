#include<stdio.h>

int main()
{
    // int matr[3][4];// syntax : datatype matr[row][column]
    // int matr[3][4] = {{10,20,30,40},{60,70,80,90},{100,12,15,18}};
   
    int matr[3][4],matr2[3][4],sum[3][4];
    printf("pls enter the matrix 1 \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&matr[i][j]);
        }
    }
    printf("pls enter the matrix 2 \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&matr2[i][j]);
        }
    }
    //--------------------logic-----------------------
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[i][j] = matr[i][j] + matr2[i][j];
        }
        
    }
    //--------------------printing---------------------
    printf("the resultant matrix is : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("\t%d",sum[i][j]);
        }
        printf("\n");
    }



    return 0;
}
