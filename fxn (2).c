#include<stdio.h>
// void fxn(); //declaration
void fxn(int a)
{
    //body of fxn
    printf("hello i am a fxn %d \n",a);                                              
}
int main()
{
    int a=10;
    printf("i am main function \n");
    fxn(a); //calling of fxn
    printf("after calling \n");
    return 0;
}

