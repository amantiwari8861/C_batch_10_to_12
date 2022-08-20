#include<stdio.h>

void greet()
{
    printf("hello everyone! \n");
    greet();
}

int main()
{
    //Recursion : when a fxn call it itself 

    greet();

    return 0;
}
