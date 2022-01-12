#include<stdio.h>

void add()
{
    printf("i am add fxn \n");
    int i=0;
    if(i<10)
    {    
        i++;
        add();
    }


}

int main()
{
    add();

    return 0;
}
