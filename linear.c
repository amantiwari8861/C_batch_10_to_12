#include<stdio.h>

int main()
{
    int  arr[]={10,50,80,200,104,5,322,45,78};
    int num,i,f=0;
    printf("enter the value to be searched \n");
    scanf("%d",&num);

    for (i = 0; i < 9; i++)
    {
        if (arr[i]==num)
        {
            printf("found at index position %d \n",i);
            f=1;
        }
    }
    if (f==0)
    {
        printf("element not found ");
    }
    int num2=10;
    // printf(" %d ",++num2); //11  pre-fix
    printf(" %d ",num2++); //10 post-fix
    printf("  %d ",num2);

    return 0;
}
//character array 