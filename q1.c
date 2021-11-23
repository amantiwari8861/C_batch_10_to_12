#include <stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    
    if (num%5 ==0   && num%7==0) 
    {
        printf("this no. is divisble by both 5 & 7");
    }
    else{
        printf("this is not divisble by 5&7");
    }
    

    return 0;
}
