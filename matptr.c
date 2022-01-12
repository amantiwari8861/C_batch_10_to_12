#include<stdio.h>
void input(int r,int c,int matr[][c])
{
  int i,j;
    printf("enter the value in matrix \n");
    printf("row = %d col = %d \n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(*(matr + i )+j));
            fflush(stdin);
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
    int matr[r1][c1],matr2[r2][c2],matr3[r1][c2];
    input(r1,c1,matr);
    return 0;
}

