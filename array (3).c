// Array string
// pointer structure file handling

#include<stdio.h>

int main()
{
    // int arr[5];//declaration of 1d array 
    // int arr[5]={10,12,14,16,18};
    int arr[]={10,12,14,16,18};
    // scanf("%d",&arr[2]);
    // printf("arr[2] = %d \n",arr[2]);
    for(int i=0;i<5;i++)
    {
        printf("arr[%d] = %d \n",i,arr[i]);
    }
    
    return 0;
}