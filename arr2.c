#include<stdio.h>
int main()
{
  
    // for (int i = 97; i <= 122; i++)
    // {
    //     printf("  %c ",i); //type casting int to char
    // }
        // for(char var='A';var<='Z';var++)
        // {
        //     printf("  %c ",var);
        // }
        //  for(char var='A';var<='Z';var++)
        // {
        //     printf("  %d ",var);
        // }

    float f=3.14;
    int a=(int) f;  //downward type casting (bcz data is loosing in this conversion)
    printf(" %d ",a); //3

    char ch=(char)65;

    printf(" %c ",ch);

    return 0;
}
/*  A - 65
    B - 66
    C - 67
    .  - .
    Z  - 90

    a - 97 
    b - 98
    c - 99
    . - . 
    z - 122
    
    0 - 48
    1 - 49
    . - .
    9 - 57
*/


// Array : array is a homogeneous collection of data which provides a seqential 
// memory allocation.