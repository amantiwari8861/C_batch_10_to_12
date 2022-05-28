#include<stdio.h>

int main()
{
    // int marks[5]={10,20,30,40,50};
    int marks[5],sum=0;
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    printf("\nAverage marks of all students: %d",sum/5);
    
    // printf("\nMarks of students are:\n");
    // for (int j = 0; j < 5; j++)
    // {
    //     printf("marks of student %d is %d\n",j+1,marks[j]);
    // }
    return 0;
}
