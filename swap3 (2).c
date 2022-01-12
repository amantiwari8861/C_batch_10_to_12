#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the value of num1 and num2 \n");
    scanf("%d%d",&num1,&num2);
    printf("before swapping num1 =%d and num2=%d \n",num1,num2);
    //swapping with 3rd variable 
    /*num3=num1;
    num1=num2;
    num2=num3;*/
    //swapping with 2  variable 
    num1=num1+num2; //10 + 20 =>30
    num2=num1-num2; //30 - 20 =>10
    num1=num1-num2; //30-10 =>20
    printf("the value after swapping num1= %d and num2 = %d \n",num1,num2);
    return 0;
}