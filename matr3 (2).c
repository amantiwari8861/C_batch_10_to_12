#include<stdio.h>

void input(int r,int c,int matr2[r][c])
{
    int i,j;
    printf("enter the value in matrix \n");
    printf("row = %d col = %d \n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matr2[i][j]);
            fflush(stdin);
        }
    }
}
void print(int matr2[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matr2[i][j]);
        }
        printf("\n");
    }
}
void multiplication(int matr1[][3],int matr2[][3],int matr3[][3])
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                matr3[i][j]+= matr1[i][k]*matr2[k][j];
            }
        }
    }
}
int main()
{
    int r1,c1,r2,c2;
    printf("input the row and column of matrix 1 \n");
    scanf("%d%d",&r1,&c1);
    printf("input the row and column of matrix 2 \n");
    scanf("%d%d",&r2,&c2);

    int matr[r1][c1],matr2[r2][c2];
    int matr3[r1][c2];
    printf("hello i am main \n");
    input(r1,c1,matr[r1][c1]);
    //input(matr2[r2][c2],r2,c2);
    //multiplication(matr,matr2,matr3);
    //print(matr3);
    return 0;
}