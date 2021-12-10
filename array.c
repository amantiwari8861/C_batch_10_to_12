#include<stdio.h>
int main()
{
    // int marks[4]={10,20,30,30};
    // int marks[]={10,20,30,30};
    int marks[4];
    // marks[0]=10;
    // marks[1]=20;
    // marks[2]=30;
    // marks[3]=40;
    for (int i = 0; i < 4; i++)
    {
        printf("enter the marks of %d :\n",i);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf(" the marks[%d] = %d \n",i,marks[i]);
    }
    

    return 0;
}
