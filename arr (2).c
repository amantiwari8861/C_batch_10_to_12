#include<stdio.h>
int print(int*);
// int print(int arr[]);
int main()
{
    int arr[5]={56,74,84,43,64};
    printf("hello i am main \n");
    print(arr);
    for(int i=0;i<5;i++)
    {
        printf("%d \t",arr[i]);
    }
    return 0;
}
int print(int *arr)
{
    int i;
    for(i=0;i<5;i++)
    {
        *arr=*arr+5;
        // printf("%d\t",arr[i]);
        //   printf("%d\t",*(arr));
          arr++;
    }
}