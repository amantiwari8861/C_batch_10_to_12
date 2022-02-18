#include<stdio.h>

int main()
{
    int row,col;
    printf("enter row and col :\n");
    scanf("%d%d",&row,&col);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("row= %d and col=%d \n",i,j);
        }
        printf("\n");
    }
    return 0;
}
