#include<stdio.h>

int main()
{
    int num=10,num2=20;
    //Arithimatic operators
    printf("the sum is %d \n",num+num2);//30
    printf("the subtract is %d \n",num2-num); //10
    printf("the product is %d \n",num2*num); //200
    printf("the division is %d \n",num2/num); //2


    printf("the remainder is %d \n",num2%num); // 0   % -> mod /modulus (to find out remainder)
    printf("the remainder is %d \n",27%2); // 1


    //relational operators : <,>,<=,>=,!=,==
    // 0=false ,1=true 
    printf("less than: %d \n",12<5); //0
    printf("greater than: %d \n",12>5);//1
    printf("less than equal to : %d \n",12<=12); //1
    printf("greater than equal to : %d \n",12>=12);//1
    printf("is equal to : %d \n",12==12);//1
    printf("not equal to : %d \n",12!=12);//0

    //logical operators : && (And),  ||  (or),  !  (not)
    printf("-------------------------------------------------------\n");
    printf("and gate : %d  \n", 1>2 && 2<5 );   // 0  statement && statement = result
    printf("or gate : %d  \n", 1>2 || 2<5 );   // 1  statement || statement = result
    printf("not gate : %d \n",!(2<8)); //0


    return 0;
}