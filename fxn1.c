#include<stdio.h>
void add();//declaration
//return type and function name 
//int a=29;
int main()
{
  //  int a=10;
    // a=10;
    //printf("before calling %d \n",a);
    add();//calling
    add();//calling
    add();//calling
    printf("after calling \n");
    return 0;
}
void add()
{
    //defination
   // printf("hello i am adding fxn %d \n",a);
    int x=10;
    static int y=10;
    printf("x = %d , y = %d \n",x++,y++);
}