#include<stdio.h>
int main()
{
    // int a[8]={56,57,93,2,67,8,76};
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements in array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    //  56 57 93 2 67 8 76;

    int min=arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("minimum :%d",min);




    return 0;
}
