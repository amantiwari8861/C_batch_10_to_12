#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter a number: ");
    scanf("%d", &num);

   while (num>0)
   {
       rem=num%10;
       printf("remainder =%d\n", rem);
       if (rem%2==0)
       {
           printf("%d is even\n", rem);
       }
        num=num/10;
        printf("num =%d\n", num);
   }

    return 0;
}