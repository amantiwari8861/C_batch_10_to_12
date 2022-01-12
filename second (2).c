#include<stdio.h>
int main()
{
    //local variables 
    //variables 
    // data types 
    //syntax:  datatype variablename;   //define a variable
    // int num;  //defining a variable
    // num=30;  //assigning/initialization a variable 
    // int num2=20;  //both initialization and declaration
    //format specifiers : to specify the format of data/variable
    //printf("the sum of %d and %d is :",num,num2);
    /*int result=num+num2;
    printf("%d",result);*/
    int num,num2,result=0,num_ber,_am;//valid variable names
    // int 5yt,gh uy,float;  //not valid variable names 
    char ch='$';
    float pi=3.14; //6 prescription point by default
    double d=56.67788567687;
    printf("enter 2 values : \n");
    scanf("%d %d",&num,&num2); //& (Ampersand) is representing memory address here
    result=num+num2;
    // printf("the \'result\"  %% is \t\t\t %d .\a",result);
    printf("the result is %c %d  %0.2f.  %lf ",ch,result,pi,d); //3.140000  -> 3.14
    return 0;
}