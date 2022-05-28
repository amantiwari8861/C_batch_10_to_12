#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int isPrime=1;
    for(int i = 2; i < 5; ++i)
    {
        if(num%i==0)
        {
          isPrime=0;
          break;
        }
    }
    if (isPrime==0)
    {
        printf("%d is not a prime number", num);
    }
    else
    {
        printf("%d is a prime number", num);
    }  
    return 0;
}
