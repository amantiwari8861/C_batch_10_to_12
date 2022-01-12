#include<stdio.h>
void print(int );

int main()
{
    int i=10;
    // recursion :whan a function call it itself it is called recursion
    print(i);
    return 0;
}

void print(int i)
{
    //int i=10; //declaration and initialization
    printf("i = %d \t",i);
    i++;
    print(i);
}