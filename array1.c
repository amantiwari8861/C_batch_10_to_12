#include<stdio.h>

int main()
{
	int arr1[5],i;
	for(i=0;i<5;i++)
	{
		printf("enter the value of arr[%d] \n",i);
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<5;i++)
	{
		// printf("the memory address of arr[%d] position is :%u \n",i,&arr1[i]);
		printf("the value of arr[%d] position is :%u \n",i,arr1[i]);
	}
	return 0;
}


	//array: array is a collection of homogeneous data which provides continous  memory allocation.
	// datatype varname[size];
	// & -> represents the address of any variable  
	// scanf("%d",&var1);
	/*	
	// int var1=10;
	// int arr[5]={12,2,3,4,67}; predefined 
	//to print the address format we use %u,%x,%d
	// printf("the memory address of var1 is %u \n",&var1);
	printf("the memory address of arr[0]th position : %u \n",&arr[0]);
	printf("the memory address of arr[1]th position : %u \n",&arr[1]);
	printf("the memory address of arr[2]th position : %u \n",&arr[2]);
	printf("the memory address of arr[3]th position : %u \n",&arr[3]);
	printf("the memory address of arr[4]th position : %u \n",&arr[4]);
	*/