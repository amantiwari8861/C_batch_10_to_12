#include <stdio.h>
int main()
{
    int matrix1[3][4], matrix2[3][4], sum[3][4];
    printf("enter the elements of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("enter the elements of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    //-------------logic for matrix addition-----------------
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    //-------------logic for matrix addition-----------------
    printf("the matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}