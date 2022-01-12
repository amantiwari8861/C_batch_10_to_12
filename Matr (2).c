#include<stdio.h>

int main()
{
    //covid data Analysis program
    // country state city
    int covid[1][2][5];
    printf("enter no. of cases in each city \n");
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 5; k++)
            {
               scanf("%d",&covid[i][j][k]);  
            }    
        } 
    }
    printf("---------------------------------------- \n");
   for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 5; k++)
            {
               printf("country[%d] state [%d] city [%d] has cases = %d \n ",i,j,k,covid[i][j][k]);  
            }    
        } 
    }
    return 0;
}


//variable conditional ascii array pattern . 
// functions pointers structure file handling  string 