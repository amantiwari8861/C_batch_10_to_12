#include<stdio.h>

int main()
{
    //operands   eg. 5+3  (5 and 3 are operands)
    //operators  eg. +  (+ is operator)
    //operators are used to perform operations on operands

    int num1,num2,num3=0;
    //there are 3 types of operators
    //1. unary operators (only one operand is required) eg. ++,--,!,~
    //2. binary operators (two operands are required) eg. +,-,*,/,%,&,|,^,<<,>>
    //3. ternary operators (three operands are required) eg. ? :

    //unary operators
    // int  aman=10;
    // aman=aman+1; or  aman++; are same
    // ar. of triangle = (base * height)/2;
    //  = (base * height)/2;

    // aman++;
    // printf("the value of aman is : %d hai .",aman);
    // aman--;
    // printf("the value of aman is : %d hai .",aman);

    //binary operators
        //1.arithmetic operators eg. +,-,*,/,%(modulus)

        printf("enter the value of num1 and num2 :\n");
        scanf("%d%d",&num1,&num2);

        // num3=num1+num2;
        // num3=num1-num2;
        // num3=num1*num2;
        // num3=num1/num2;
        // num3=num1%num2;
        // printf("the result of num1 and num2 is : %d\n",num3);

        //2.relational operators eg. <,>,<=,>=,==,!=

        // num3=num1<num2;
        // num3=num1>num2;
        // num3=num1<=num2;
        // num3=num1>=num2;
        // num3=num1==num2;
        // num3=num1!=num2;
        // printf("the result is : %d\n",num3);

        //3.logical operators eg. && (and),|| (or),! (not)

        // a. && (and) : if both operands are true then result is true

            // num3 = 10>5 && 10<20; //   1 && 1 -> 1 (true)
            // num3 = 10>5 && 10>20; //false
            // printf("the result is : %d\n",num3);

        // b. || (or) : if either operand is true then result is true

            // num3=10>5 || 10<20; //true
            // num3=10>5 || 10>20; //true
            // num3=10<5 || 10>20; //false
            // printf("the result is : %d\n",num3);

        // c. ! (not) : if operand is true then result is false 
                    //  if operand is false then result is true

            // num3=!(10>5); //false
            // num3=!(10<5); //true
            // printf("the result is : %d\n",num3);

        //4.assignment operators eg. =,+=,-=,*=,/=,%=,&=,|=,^=,<<=,>>=
        // int num4=23;// assignment right to left
        // num4=num4+10; or num4+=10; are same
        // num4=num4-10; or num4-=10; are same
        // num4=num4*10; or num4*=10; are same
        // num4=num4/10; or num4/=10; are same
        // num4=num4%10; or num4%=10; are same
        // num4 *= 10;
        // printf("the value of num4 is : %d\n",num4);

        //5.Bitwise in next session

    //ternary operators (conditional operator)
        // syntax : (condition)?(if true):(if false);

        //note: left hand value is always required 
        // 10>5?10:5;// invalid lvalue is required
        num3= (num1>num2 )? num1 : num2; 
        printf("the result is : %d\n",num3);

    return 0;
}
