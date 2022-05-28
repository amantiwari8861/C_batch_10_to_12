#include<stdio.h>

int main()
{
    // int covidCases[3][2]={{100,200},{300,400},{500,600}};
    int covidCases[3][2];
    printf("Enter the number of covid cases\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &covidCases[i][j]);
        }
    }
    printf("The covid cases are:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", covidCases[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}
