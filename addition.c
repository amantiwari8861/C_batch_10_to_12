#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the no. of rows:"); 
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||i==n||j==0||j==n)
            {
                printf("*");
            }
            else
            {
                printf("not possible");
             
            }
        }
    }
    return 0;
}
