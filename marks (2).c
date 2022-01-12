#include<stdio.h>

int main()
{
    int n,i,total=0;
    printf("enter the no. of subjects \n");
    scanf("%d",&n);
    int marks[n];

    printf("input the elements in array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
        total = total +  marks[i];
    }
    int per= (total/n);
    printf("the percentage is %d \n",per);

    return 0;
}