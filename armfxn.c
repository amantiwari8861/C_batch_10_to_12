#include<stdio.h>
void isArmstrong(int);
int main()
{
    isArmstrong(371);
    isArmstrong(370);
    isArmstrong(240);
    isArmstrong(153);   
    return 0;
}
void isArmstrong(int num)
{
    int rem,result=0;
    int temp=num;
    while (num>0)
    {
        rem=num%10;
        result=result + rem*rem*rem;
        num=num/10;
    }
    if(temp==result)
        printf("%d is armstrong no. \n",temp);
    else
        printf("%d is not a armstrong no. \n",temp);
}
void ispalindrome(int num)
{

}