#include<stdio.h>

int main()
{
    //clrscr(); //clear screen function (remove old outputs )
    int num1,num2;//declare 
    printf("enter the value of num1 and num2 \n");
    scanf("%d%d",&num1,&num2);//& = ampersand (represents address of variable ) 
    int rem=num1%num2;//modulus gives remainder
    int quo=num1/num2;
    
    //printf("the result of %d and %d is %d \n ",num1,num2,c);
    printf("the quotitent is %d and remainder is %d \n",quo,rem);
    //getch();  //to get a hidden input from user 
    return 0;
}