#include<stdio.h>
int main()
{
    // int matr[3][3],i,k;
    int i,k,matr[3][3]={{10,20,30},{45,85,98},{87,45,98}};
    printf("enter the value in matrix\n");
    /*for(i=0;i<3;i++)
    {
        for ( k = 0; k < 3; k++)
        {
            printf("enter the value in %dth row %dth column : ",i,k);
            scanf("%d",&matr[i][k]);
        }
    }*/
    for(i=0;i<3;i++)
    {
        for ( k = 0; k < 3; k++)
        {
            printf("\t%d ",matr[i][k]);
        }
        printf("\n");
    }
    matr[1][2]=44;
    printf("the value of 1th row 2nd column = %d  ",matr[1][2]);
    return 0;
}