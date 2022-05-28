#include<stdio.h>
int main()
{
    int age,result;
    printf("enter your age\n");
    scanf("%d",&age);

    //ternary operator
    result=(age>=18)?printf("you are eligible to vote\n"):printf("you are not eligible to vote\n");
    
    // if (age>=18)
    // {
    //     printf("you are eligible to vote\n");
    // }
    // else
    // {
    //     printf("you are not eligible to vote\n");
    // }
    
    
    
    return 0;
}
