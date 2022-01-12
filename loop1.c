#include<stdio.h>
int main()
{
	// loops
	//  for,while,do-while
	/* for loop syntax
		for(initialization;condition;increment/decrement)
		{
			//statements
		}
	*/
	int i; //declaration
	for(i=1;i<=10;i++)
	{
		printf("the value of i in step %d is %d  \n",i,i);
		
	}
	return 0;
}
/*
1<10  true i++   ==> 2
2<10   true i++  ==>3
3<10   true  i++ ==>4
.  .
.  .
10<=10  true  i++ ==>11
11<=10   false  loop terminated 
*/