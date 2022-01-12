#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the value of num1 and num2 \n");
	scanf("%d %d",&num1,&num2);
	printf("number before swapping num1=%d and num2 = %d\n",num1,num2);
	num1= num1+num2;
	num2= num1-num2;
	num1= num1-num2;
	printf("number after swapping num1 = %d and num2 = %d\n",num1,num2);
	return 0;
}