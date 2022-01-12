#include<stdio.h>

int main()
{

	//decrement loop
	int i;
	
	printf("this is decrement loop example \n");
	//print counting from 20 to 1 
	for(i=20;i>=1;i--)
	{
		printf("\t %d \n",i);
	}
	/*
	step 1:   i=20
			20<=1  false loop will not execute 
	but 
	if we use i>=1
	
	step 1: i=20
			20>=1  true loop execute
			i-- => 19

	step 2: i=19
			19>=1 true
			i-- =>18
	.		
	.
	.		
	.
	step 21:  i=0
				0>=1 false loop terminates here
		
	*/
	
	return 0;
}


//h.w : take 10 subject marks from user and find the percentage from this.
//		print reverse counting with decrement loop


