#include<stdio.h>
#include<stdlib.h>
void inputMatrix(int r,int c,int matr[][c])
{
    static int count=1;
    printf("input the matrix %d \n",count++);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matr[i][j]);
        }
    }
}
void multiplication(int r1,int c1,int r2,int c2,int matr1[][c1],int matr2[][c2],int matr3[][c2])
{
    int i,j,k;
    printf("multiplication done!\n");
      for ( i = 0; i < r1; i++) {
      for ( j = 0; j < c2; j++) {
         matr3[i][j] = 0;
      }
   }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                matr3[i][j]=matr3[i][j]+matr1[i][k]*matr2[k][j];
            }
        }
    }
}
void print(int r,int c,int matr[][c])
{
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",matr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int r1,c1,r2,c2;
    printf("input the row and column of matrix1\n");
    scanf("%d%d",&r1,&c1);
    printf("input the row and column of matrix2\n");
    scanf("%d%d",&r2,&c2);
    int matr1[r1][c1],matr2[r2][c2],matr3[r1][c2];
    if(c1!=r2)
    {
        printf("multiplication is not possible \n");
        exit(0);
    }
    else
    {
        inputMatrix(r1,c1,matr1);
        inputMatrix(r2,c2,matr2);
        multiplication(r1,c1,r2,c2,matr1,matr2,matr3);
        print(r1,c2,matr3);
    }
    return 0;
}