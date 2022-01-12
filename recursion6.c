#include<stdio.h>

int printcounting(int num)
{
    if (num>0)
    {
        printf("hiii  %d\n",num);
        printcounting(num-1);    
    }
}

int main()
{
    printcounting(10);
    return 0;
}

//factorial from using recursion 
//fibonnaci series using recursion