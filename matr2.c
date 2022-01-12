#include<stdio.h>

int main()
{
    int matr1[3][3],i,j,matr2[3][3],matr3[3][3]={0};
    printf("enter the first matrix \n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&matr1[i][j]);
        }
        
    }
    printf("\n---------------------------------------------------\n");
    
    printf("enter the second matrix \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&matr2[i][j]);
        }
        
    }
    printf("\n----------------------  Logic  ---------------------------\n");
      for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            matr3[i][j]=matr1[i][j] + matr2[i][j];
        }
        
    }
    
    printf("the resultant matrix is \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\t%d",matr3[i][j]);
        }
        printf("\n");
    }    
    return 0;
}