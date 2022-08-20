#include<stdio.h>
int aman(int,int);

int num5=89; //global variable

int main()
{
    int num,power,temp=65;//local variable
    printf("enter num ,power ");
    scanf("%d%d",&num,&power);

    int result=aman(num,power);
    printf(" power %d ",result);
    printf(" num5 = %d \n",num5);

    return 0;
}
int aman(int num,int power)
{
    int p=1;
    for (int i = 0; i < power; i++)
    {
        p=p*num;
    }

    // printf(" temp = %d ",temp);
    printf(" num5 = %d \n",num5);

    return p;
}