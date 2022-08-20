#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);//5

    //5!=5*4*3*2*1 = 120
    int fact=1;
    for (int i = num; i >0 ; i--)
    {
        fact=fact*i;
    }
    printf("   %d!=%d  ",num,fact);
    
    


    return 0;
}
