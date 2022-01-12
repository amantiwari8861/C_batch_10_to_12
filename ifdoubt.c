#include<stdio.h>
int main()
{
    // int num1,num2;
    int num;
    printf("enter 2 no. \n");
    // scanf("%d%d",&num1,&num2);
    scanf("%d",&num);

    if(num%5==0 && num%11==0)
    {
        printf("perfectly divisible by 5 and 11 \n");
    }
    else
    {
        printf("not perfectly divisible by 5 and 11 \n");
    }

    return 0;
}
/*
Write a C program to find maximum between two numbers.
// Write a C program to find maximum between three numbers.
Write a C program to check whether a number is negative, positive or zero.
Write a C program to check whether a number is divisible by 5 and 11 or not.
Write a C program to check whether a number is even or odd.
*/
// 20/2 remainder 0 then it is even 
// modulus ( % )

   /* if(num1>num2)
    {
        printf("num1 is greater \n");
    }
    else
    {
        printf("num2 is greater than num1 \n");
    }*/
        // printf("the remainder is %d \n",num%3);
  /*  if(num%2==0)
    {
        printf("even no. ");
    }
    else
    {
        printf("odd no.");
    }*/
    
    // if(num<0)
    // {
    //     printf("negative no. ");
    // }
    // else if(num>0)
    // {
    //     printf("positive no. ");
    // }
    // else
    // {
    //     printf("Zero ");
    // }

    /*take amount from user (10000)
    amount > 1000 2% discount
    amount > 5000 5% discount
    amount > 10000 20% discount
    amount > 100000 90% discount
    and find the net amount (net amount = amount - discount )
    */




