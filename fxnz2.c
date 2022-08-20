#include<stdio.h>
void greet(); //declaration
int main()
{
    printf("i am in main fxn before \n");
    greet();//call
    printf("i am in main fxn after \n");
    return 0;
}
void greet()//defination(body)
{
    printf("good morning everyone \n");
}