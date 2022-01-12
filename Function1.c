#include<stdio.h>
void addition(); //declaratio of fxn

// syntax:
// return_type fxn_name(parameters/argument)
// {
//     body;
// }

void subtraction()  //function body
{
    printf("in sub fxn \n");
    int a=10,b=20;
    printf("the sum is %d \n",a-b);
}
int main() //called by compiler 
{
    printf("in main fxn \n");
    subtraction(); //calling of fxn
    addition(); //calling of fxn
    addition(); //calling of fxn
    addition(); //calling of fxn
    addition(); //calling of fxn
    printf("again in main fxn\n");
    return 0;
}
void addition()  //function body
{
    printf("in addition fxn \n");
    int a=10,b=20;
    printf("the sum is %d \n",a+b);
}



//reusability of code 
//increase readibility 
//decrease complexity
//modularity

// types of fxn
// 1. no argument no return type.
// 2. with argument no return type. 
// 3. without argument with return type. 
// 4. with argument and return type. 