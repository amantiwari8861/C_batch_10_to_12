#include<stdio.h>

int main()
{
   /*  3. Write a program in C to display n terms of natural number and their sum. 
    Test Data : 7
    Expected Output :
    The first 7 natural number is :
    1 2 3 4 5 6 7
    The Sum of Natural Number upto 7 terms : 28 */

    int sum=0,n,i;
    printf(" enter the n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf(" %d  ",i);
        sum = sum + i;
    }
    printf("\n the sum is %d \n",sum);


    return 0;
}
/*      psuedocode

    step 1: let i=1 , sum =0 ,n=7
            1<=7  true
            sum = sum + i
            sum = 0 +1 
            sum=1

    step 2: i=2 ,sum =1 ,n=7
            2<=7 T
            sum = 1 + 2 => 3

    step 3: i=3 ,sum=3 ,n=7
            3<=7 t
            sum = 3+3 => 6

        ....

    step 8: i =8 , sum=28 ,n=7
            8<=7 False
            loop terminate.
*/