#include<stdio.h>
#include<stdlib.h>
int main()
{
    // array (static)
    // int arr[5];
    int *ptr,abc=10;
    ptr=(int*)malloc(5*sizeof(int)); //5*4=20 bytes
    // *ptr => represent value at address
    // ptr => address
    // *ptr=10; //value 
    // ptr=abc; //address
    for (int i = 0; i < 5; i++)
    {
        *(ptr+i)=10+i;
    }
    free(ptr);
    for (int i = 0; i < 5; i++)
    {
        printf("the value at %d is %d \n",i,*(ptr+i));
    }
    
    return 0;
}