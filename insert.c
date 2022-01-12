#include<stdio.h>
int main()
{
    int arr[11]={10,20,30,40,50,60,70,80,90,100,0};
    int num2,i,pos2;
    printf("enter no. to be inserted \n");
    scanf("%d",&num2);
    //inserting
    printf("enter the position \n");
    scanf("%d",&pos2);
    int size=sizeof(arr)/sizeof(int);
    //printf("%d\n",size);
    for ( i = size; i >=pos2 ; i--)
    {
       arr[i]=arr[i-1];
    }
    arr[pos2]=num2;
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}










