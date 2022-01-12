#include<stdio.h>
int input();
int logic();
int print();

int main()
{
    printf("Matrix addition program \n");
    int matr1[3][3]={0},matr2[3][3],matr3[3][3];
    matr1[][3]=input(matr1);
  //  logic();
    //print();

    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",matr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int input(int matr1[][3])
{
    int i,j;
    printf("input the value in matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matr1[i][j]);
        }
    }
    return matr1[][3];
}