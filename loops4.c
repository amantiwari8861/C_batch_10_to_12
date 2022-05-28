#include<stdio.h>
int main()
{
    int num,rem,result=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp=num;
    while (num>0)
    {
        rem=num%10;
        result = result+ rem*rem*rem;
        num=num/10;
    }
    // printf("the value of result is %d", result);
    if (temp==result)
    {
        printf("%d is an Armstrong number", temp);
    }
    else
    {
        printf("%d is not an Armstrong number", temp);
    }
    return 0;
}

    //armstrong number 
    //   153 ->
    //   1*1*1 + 5*5*5 +3*3*3
    //   1+125+27
    //   153 

    // result=0
    // 153%10 -> 3
    // result = 3*3*3 + 0  -> 27
    // 153/10 -> 15.3 -> 15 ( in int)

    // 15%10 -> 5
    // result = 5*5*5 + 27 -> 152
    // 15/10 -> 1.5 -> 1

    // 1%10 => 1
    // result = 1*1*1 + 152 -> 153
    // 1/10 => 0.1 -> 0

