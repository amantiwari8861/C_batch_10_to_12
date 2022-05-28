#include<stdio.h>
int main()
{
    // int i;
    // for(i=2;i<10;i++)
    // {
    //     printf("Hello everyone %d\n",i);
    // }

    // syntax:while (/* condition */)
    // {
    //     /* code */
    // }
    
    // int i=2;
    // while (i<10)
    // {
    //     printf("Hello everyone %d\n",i);
    //     i++;
    // }
    
    // int i=2;
    // do
    // {
    //     printf("Hello\teveryone %d\n",i);
    //     i++;
    // } while (i>10);

    // int num=5;
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf(" %d ",num);
    //     num=num+5;
    // }
    // 5 X 1 = 5
    // 5 X 2 = 10
    // . . .
    // 5 X 10 = 50
    
    // num x 1 =num*1
    // num x 2 =num*2
    // . . .
    // num x 10 =num*10

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++)
    {
        printf(" %d X %d = %d\n",num,i,num*i);
    }
    
    return 0;
}