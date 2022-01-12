#include<stdio.h>
//if u declare function here then u have to give body of same function below
//if u have given the body of function here then u don't need a declaration
int fun1(int d,int f)
{
    printf("i am function %d %d  ",d,f);
}
int main()
{
    int a=100,b=50;
    // if(a==100)

    
    // {
    //     fun1(a,b);
    // }
    char ch;
    scanf("%c",&ch);
    // scanf("\n"); or fflush(stdin);
    switch(ch)
    {
        case '+' :result1= add();
            break;
        case '-' :sub();
            break;
        case '*' :mul();
            break;
        default:printf("invalid !");
    }
    return 0;
}