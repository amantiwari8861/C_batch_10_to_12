#include<stdio.h>

int main()
{
    int num1,num2,min,max;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);//23 12

    min= (num1<num2)?num1:num2; // 23<12 ? 23:12
    max= (num1>num2)?num1:num2;

    printf("Minimum: %d\n",min);
    printf("Maximum: %d\n",max);
    return 0;
}
