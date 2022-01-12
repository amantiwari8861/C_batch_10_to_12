#include<stdio.h>
int main()
{
    int arr[5];
    // int arr[5]={1,2,3,4,5}; 
    // int arr[]={1,2,3,4,5};
    printf("enter the elements in an array \n");
    //taking user defined values in array
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    // int count;
    // for (count = 0;arr[count]!='\0'; count++);
    // printf("the size of array is %d \n",count-1);
    for (int i = 0; i < 5; i++)
    {
        printf("the value at index %d is %d \n",i,arr[i]);
    }
    return 0;
}
//largest value in array
//min,max in array ,take 7 subject marks in a array and find %
