#include<stdio.h>
int main()
{
	int arr[]={1,4,2,3,5,10};
    int i,flag=0;
    for(i=0;i<6;i++)
    {
        if(arr[i]==2)
        {
            printf("found at index %d \n",pos);
            flag=1;
        } 
    }
    if(flag==0)
    {
        printf("value not found \n");
    }
    return 0;
}

    // printf("enter no. to be inserted \n");
    // scanf("%d",);
 // int arr[11]={10,20,30,40,50,60,70,80,90,100,0};
    //int i,pos=0,flag=0,num;
//searching
    //printf("enter the number \n");
    //scanf("%d",&num);