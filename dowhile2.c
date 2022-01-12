#include<stdio.h>

int main()
{
    int i=1;

    do
    {
        printf(" \t %d ",i);
        i++;
    } while (i>10);  //false 1
    //} while (i<10);  //true 1 2 3 4 5 6 7 8 9 10
    
//in while first he checks the condition then runs
//in do-while he runs first then checks the condition

    while (i>10)  //false 
    {
        printf(" \t %d ",i);
        i++;
    }
     while (i<10)  //true
    {
        printf(" \t %d ",i); // 1  2 3  4 5 6 7  8 9
        i++;
    }


    return 0;
}

//h.w
//palindrome 121  ==> 121
//reverse 123 ==>321