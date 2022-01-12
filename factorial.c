#include<stdio.h>
int factorial(int number)
{
    if (number>0)
    {        printf(" number %d \n",number);
        return number*factorial(number-1);    }
    else
    {        //when if condition is false
        return 1;    }
}int main()
{
    int number;
    printf("enter the no. :");
    scanf("%d",&number);//5
    int result=factorial(number);
    printf(" result = %d \n",result);
    return 0;
}
