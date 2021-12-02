#include<stdio.h>
int main()
{
    char ch='Z';   
    // printf(" ascii of %c is : %d ",ch,ch); //implicit type casting
    int asc=(int)ch; // explicit type casting
    printf(" ascii of %c is : %d ",ch,asc); 
    return 0;
}
