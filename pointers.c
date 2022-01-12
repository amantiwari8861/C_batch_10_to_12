#include<stdio.h>
int main()
{
    int var=30;
    // & -> Ampersand -> address of
   // * -> value at address 
    int *abc; //declaration pf pointer 
   // int *abc=NULL; //declaration pf pointer 
   printf("the address of var is %d \n",&var); //6684188
   printf("the value of var is %d \n",var); //30
//    printf("the address of pointer is %d \n",&abc);//random
//    printf("the value of pointer is %d \n",abc);//random
//    printf("the value of pointer is %d \n",*abc);//random
   abc=&var;
   printf("the value of pointer abc is %d \n",abc);
   printf("the value at address in pointer abc is %d \n",*abc);
    return 0;
}