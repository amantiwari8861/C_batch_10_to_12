#include<stdio.h>
int main()
{
    //upward type casting 
    int a=50;
    float b=(float)a; //int to float 
    printf("the value of a is %f \n",b); 
    //downward type casting
    float pi=3.14;
    int c=(int)pi;
    printf("the value of c is %d \n",c);
    char ch1='A';
    //ascii =american standard code for information interchange
    printf("the ascii value of capital A is  %d \n",ch1);
    int cap=97;
    char ch=(char)cap;
    printf("the value of 97 is %c ",ch);
    return 0;
}
// h.w take a input from user in character and find out is it numeric,small alphabet,capital alphabet 
//or any special character 


