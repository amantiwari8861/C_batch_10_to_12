#include<stdio.h>
#include<math.h>

int main()
{
    //functions: functions has two types 
    /*
    1.pre-defined functions 
    2.user-defined
    features of functions:
          modularity  : one function is independent to each other 
          reusability : ability to reuse the code again again
          scalabality : after no. of hits the performance of our software will not decline
          readibility :ability to read the  code efficiently
    
    math.h -> contains many pre-defined 
    */
    //calculate the power
    //pow function 

    int num=5,power=3;
    float result=0.0;
    // result=pow(num,power);
    // result=log2(5);
    // result=log10(5);
    result=log10(5);
    printf("the power is %f \n ",result);

    return 0; //program succesfully ended
}
//floor,ceiling,sin,abs