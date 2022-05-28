#include<stdio.h>

int main()
{
    float marks[5],sum=0;

    printf("Enter the marks of 5 subjects: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
    }
    
    printf("\nThe percentage of the marks is:%0.2f",sum/5);

    return 0;
}
