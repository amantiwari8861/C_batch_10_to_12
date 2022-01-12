#include<stdio.h>
int main()
{
    int marks;
    printf("enter ur marks in %% \n");
    scanf("%d",&marks); 
    if(marks>=60 && marks<=80)
    {
        printf("you got B grade ");
    }
   /* case 1: marks = 50  
        50>=60 ==> 0
        50<=80 ==> 1
        0 || 1 => 1 //final result
      case 2:marks =90
        90>=60 ==> 1
        90<=80 ==> 0
        1 || 0 ==> 1 //final result
      case 3:marks =65
        65>=60 ==>1
        65<=80 ==>1
        1 || 1 ==>1 //final result
    */
/*
    case 1: marks =50 
        50>=60 ==> 0
        50<=80 ==> 1
        0 && 1 => 0 //final result
    case 2:marks =90
        90>=60 ==> 1
        90<=80 ==> 0
        1 && 0 ==> 0 //final result
    case 3:marks =65
        65>=60 ==>1
        65<=80 ==>1
        1 && 1 ==>1 //final result
*/




    return 0;
}