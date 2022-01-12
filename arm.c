#include<stdio.h>
int main()
{
    int num,temp,rem,result;
    num=temp=rem=result=0;
    printf("enter the number \n");
    scanf("%d",&num);
    temp=num;
    while (temp>0)
    {
        rem=temp%10;
        result=result + rem*rem*rem;
        temp=temp/10;
    }
    if(num==result)
    {
        printf("armstrong no. \n");
    }
    else
    {
        printf("not a armstrong no. \n");
    }
    return 0;
}