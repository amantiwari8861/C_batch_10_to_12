#include<stdio.h>
int main()
{
    int num,i,flag=0;
    int arr[]={10,230,30,3,3,232,33,32,23,33,232};
    printf("enter value to be searched \n");
    scanf("%d",&num);
    for(i=0;i<11;i++)
    {
        if(arr[i]==num)
        {
            printf("found at %d position \n",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("not found\n");
    }
    int size=sizeof(arr)/sizeof(int);
    printf("size = %d \n",size);
    return 0;
}