#include<stdio.h>
int main()
{
    int i=0;
    for(;;) //infinite for loop
    {
        printf("hello ");
        i++;
        if(i==10)
        {
            break;
        }
    }
    /*
    while(1)//true
    {
        //infinite while loop
    }
    do{

    }while(1);
// */
    return 0;
}