#include<stdio.h>

int main()
{
    //for loop , while ,do-while 

    int a; //declaration
    // a=10; //initialization (assignment)
    // int b=20; //declaration and initialization

    // a++; // 10+1 =>11
    // b--; // 20-1 =>19

    /*syntax : 
                for(initialization ; condition ; increment/decrement)
                {
                    statements to be repeated
                }
    */
//    for(;;)
//     {
//         printf(" the value of a is %d \n",a);
//     }
    // condition (tells us how many times we have to execute )


   for(a=10;a<20;a++)
    {
        printf(" the value of a is %d \n",a);
        
    }
    //10 < 20 always true  
    //11 < 20 always true  
    //12 < 20 always true  
    //. < 20 always true  
    //. < 20 always true  
    //19 < 20 always true  
    //20 < 20 false then it will not run  
    return 0;
}

    // printf("hello my name is aman \n");
    // printf("hello my name is aman \n");
    // printf("hello my name is aman \n");
    // printf("hello my name is aman \n");
    // printf("hello my name is aman \n");