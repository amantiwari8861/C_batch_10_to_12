#include <stdio.h>

int main()
{
    int n, m, arr[100][100];
    //  int arr[2][4] ={
    //     {1,2,3,4},
    //     {5,6,7,8}};

    printf("Enter the number of state and city: ");
    scanf("%d%d", &n, &m);
    printf("Enter the state and city: \n");
    for (int i = 0; i < n; i++) //for state
    {
        for (int j = 0; j < m; j++) //for city
        {
            printf("Enter the cases at %d state and %d city: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("total cases: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("at state %d in city %d total cases =  %d \n", i + 1, j + 1, arr[i][j]);
        }
    }
    return 0;
}
