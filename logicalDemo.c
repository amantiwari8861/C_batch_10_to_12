#include<stdio.h>

int main()
{
    int num1,num2,result;
    printf("enter 2 values : \n");
    scanf("%d%d",&num1,&num2);//  
    //logical operators
    // result= 10<30 && 20>5; // 1 && 1 ->  1
    // result= 10<30 && 20<5; // 1 && 0 ->  0
    // result= 10<30 || 20<5; // 1 || 0 -> 1  
    // result= !(10<30) || 20<5; // 0 || 0 -> 0

    //assignment operator(short hand operator) eg. = ,+=,-=,*=,/=,%=
    // num1=30; // here = is an assignment operator
    // num1=num1+30; //40 
    // // or 
    // num1 += 30; //40
    // num1=num1-30; //40 
    // or 
    // num1 -= 30; //40

    //bitwise operator  |(bitwise or) &(bitwise and) ~(bitwise not)
    // 17 -> 10001 -> convert into 8 bit representation
    // 17 -> 0001 0001 (in 8 bit )
        //  17 -> 10001
        //  13 -> 01101
    // 17 & 13 -> 00001 -> 1 ans.
    // 17 | 13 -> 11101 -> 29 ans.
    // printf(" 17 & 13 is %d \n",17&13);
    // printf(" 17 & 13 is %d \n",17|13);
    // ~17 -> 01110 =>
    unsigned char a=17;
    printf(" %d  \n",a=~a); // true


    // left shift (<<) and right shift(>>)
    // 17 -> 00010001 
    // 17<<3 10001000 -> 136
    // 17>>3 00000010 -> 2
    // printf(" 17 << 3 = %d \n",17<<3);
    // printf(" 17 >> 3 = %d \n",17>>3);

    // Ternary or Conditional Operators

    // syntax:   (condition) ? (if true) : (if false)

    // result= (num1<num2) ? num1 : num2 ;
    // printf(" %d is smallest \n",result);
    // result= (num1>num2) ? num1 : num2 ;
    // printf(" %d is largest \n",result);
    result= (num1==num2) ? 1 : 0 ;
    printf(" is equal ? : %d\n",result);


    return 0;
}

// 8448179216