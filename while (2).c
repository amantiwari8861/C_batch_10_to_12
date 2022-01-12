#include<stdio.h>

int main()
{
    // while(condition)
    int num=200;
    char ch;
    // while()
    // {
    //       if(num>5)
    //     {
    //         break;
    //     }
    //     //statements
        while(num>100)
        {
            printf("%d\t",num--);

            printf("u want to continue y/n :");
            scanf("%c",&ch);

    if(ch=='n'||ch=='N')
    break;

            // num--;
        }
    return 0;
}