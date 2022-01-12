#include<stdio.h>
    
/* int num=0;
void counting()
{
    // static int num=0;
    // int num=0;
    if (num<10)
    {
        num++;
        printf("the fxn is calling %d \n",num);
        counting();
    }
} */
void counting(int max)
{
    printf("the fxn is calling %d \n",max);
    if (max>0)
    {
        max--;
        counting(max);
    }
}
int main()
{
    int max;
    printf("enter the last no. :");
    scanf("%d",&max);//100
    counting(max);

    return 0;
}
