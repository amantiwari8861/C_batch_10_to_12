#include<stdio.h>

int main()
{
    /*for loop
    syntax: 
    for(initialization;condition;increment/decrement)
    {
        //statements
    }*/

    int a;

    for(a=10;a>=1;a--)
    printf("the value of a is %d \n",a);

    // step 1: a=10 
    //         10>= 1 true 
    //         the value of a is 10
    //         a-- => 10-1 =>9

    // step 2: a=9
    //         9>=1 true 
    //         the value of a is 9
    //         a--; 9-1 =>8 

    // step 3: a=0
    //         0>=1 false 
    return 0;
}