#include<stdio.h>
#include<math.h>
void powr();
void Addition(); //  declaration of function

int main()
{
    printf("i am main fxn \n");
//    Addition(); //calling of Addition fxn 
    // printf("code after addition function \n"); 
    powr();
    return 0;
}
void Addition()
{
    printf("hello i am addition function \n");
}
void powr(){
    int powrz=5,num=2,rslt;
    // rslt=pow(num,powrz);
    rslt=sqrt(25);
    printf("th powr is %d \n",rslt);
}