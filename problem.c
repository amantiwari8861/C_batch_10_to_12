#include<stdio.h>
#define MAX 50
#define MAX_MERGE 100

int input(int arr[])
{
    static int num=0;
    int len=0;
    printf("enter the size of array %d \n",(++num));
    scanf("%d",&len);
    printf("enter the element in array %d \n",num);
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    return len;
}
void sort(int arr[],int len)
{
    int temp=0;
    for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int merge(int a[],int b[],int sum[],int m,int n)
{
    int i, j, k;
    i = j = k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            sum[k] = a[i];
            i++;
            k++;
        }
        else
        {
            sum[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < m)
    {
        sum[k] = a[i];
        i++;
        k++;
    }

    while (j < n)
    {
        sum[k] = b[j];
        j++;
        k++;
    }
    return m+n;
}
void print(int arr[],int size)
{
    printf("the merged array is \n");
    for (int i=0; i<size; i++)
    {
        printf(" %d \t",arr[i]);
    }
}
int main()
{
    int A[MAX],B[MAX],sum[MAX_MERGE],l1,l2;
    l1=input(A);
    l2=input(B);
    sort(A,l1);
    sort(B,l2);
    int s=merge(A,B,sum,l1,l2);
    print(sum,s);
    return 0;
}