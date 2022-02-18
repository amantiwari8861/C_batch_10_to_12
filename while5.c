#include<stdio.h>
int main()
{
    int num,count=0,sum=0;
    printf("enter the number : ");
    scanf("%d",&num);

    while(num >0)  //condition
    {   
        int rem=num%10;
        if (rem%2 == 0) 
        {
            sum = sum+rem;
        }
        num=num/10;
    }
    // int i=0;
    // while (i<10)
    // {
    //    printf(" %d \n",i);
    //    i++;
    // }
    // printf(" sum of even digit :%d ",sum);
    return 0;
}

// Q.1 print counting 1 - 100
// Q.2 print reverse counting 100 - 1

// Q.3 num = 153    
//      1^3 +5^3 + 3^3
//      1+ 125+27
//      153   Armstrong no.

// Q.4 num = 56378
// output : 87365

//  Q.6 num = 12321
//  reverese = 12321   palindrome