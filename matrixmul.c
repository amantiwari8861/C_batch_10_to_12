#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter the order of first matrix : \n");
    scanf("%d%d",&r1,&c1);
    printf("enter the order of second matrix : \n");
    scanf("%d%d",&r2,&c2);
    if (r1==c2)
    {
        printf("matrix multiplication is possible \n");
        int matr1[r1][c1],matr2[r2][c2],matr3[r1][c2];
        printf("enter the first matrix :\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d",&matr1[i][j]);
            }
        }
        printf("enter the second matrix :\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d",&matr2[i][j]);
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                matr3[i][j]=0;
                for (int k = 0; k < c2; k++)
                {
                    matr3[i][j]=matr3[i][j]+matr1[i][k]*matr2[k][j];
                }   
            }
        }
        printf("the resultant matrix is :\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("\t%d",matr3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        pritf("matrix multiplication is possible \n");
    }
    return 0;
}
