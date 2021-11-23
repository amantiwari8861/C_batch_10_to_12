#include<stdio.h>
int main()
{
    int num,num2,ressult=10;
    printf("enter 2 numbers :\n");
    scanf("%d%d",&num,&num2);

    // ressult=num%num2;
    // ressult=num < num2; //10 < 20 
    // ressult=num > num2; //10 > 20 
    // ressult=num >= num2; //10 > 20 
    // ressult=num==num2;
    // ressult=ressult+20;
    // ressult+=20;
    // ressult-=20; //10-20 =10
    ressult= num>0 && num<50;
    printf("the result is :%d",ressult);
/*
multiple line comment
*/
    return 0;
}
