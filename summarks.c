#include<stdio.h>

int main()
{
    int marks[5]={90,85,45,35,12},sum=0;

    for (int i = 0; i < 5; i++)
    {
        printf(" %d ",marks[i]);
        sum=sum+marks[i];
    }
    printf("\nAverage marks of all students: %d %%",sum/5);
    
    
    return 0;
}