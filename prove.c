#include<stdio.h>

void prove(int arr[])
{
    for(int i=0;i<11;i++)
    {
        arr[i]=arr[i]+10;
        // printf("%d \n",&arr[i]);
    }
}
void print(int arr[])
{
      for(int i=0;i<11;i++)
    {
        printf("%d \n",arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4,54,5,5,5,6,6,56};
    prove(arr);
    print(arr);
    return 0;
    
}