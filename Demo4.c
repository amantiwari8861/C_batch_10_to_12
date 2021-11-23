#include<stdio.h> //standard input output header file
#include<conio.h>
int main()
{
    int num,num2,result=0;
    // printf("hello world \n");
    // scanf("%d",&num);//
    // printf("the num is %d ",num);
    // printf("the memory address of num is %x ",&num);
    // printf("%c",65);

    printf("enter 2 number :");
    scanf("%d%d",&num,&num2);
    result=num%num2;
    printf("the result is %d" ,result);


    getch();
    return 0;
}
