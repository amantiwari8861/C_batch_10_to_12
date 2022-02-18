#include<stdio.h>
int main()
{
    int digit,countEven,rem;
    printf("enter the number  :");
    scanf("%d",&digit);//let digit=567321
    for(;digit != 0;)
    {
		rem=digit%10;
		if(rem%2==0)
		{
			countEven++;
		}
        digit=digit/10;
    }
    printf("the even number of digit = %d \n",countEven);
    return 0;
}