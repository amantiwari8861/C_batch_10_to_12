#include<stdio.h>
//int addition(int,int);
int swap(int,int);
int main()
{
    int num1,num2;
    printf("enter the 2 numbers \n");
    scanf("%d%d",&num1,&num2);
    swap(num1,num2);
    //int sum=addition(num1,num2);
    //printf("the addition is %d \n",sum);
    printf("in main num1=%d ,num2=%d \n",num1,num2); //10 20
    return 0;
}
int swap(int num1,int num2)
{
    int temp=0;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("in function swap num1= %d ,num2=%d \n",num1,num2); //20 10 
}
/*
int addition(int num1,int num2)
{
    return num1+num2;
}*/