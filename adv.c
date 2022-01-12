#include<stdio.h>
int main()
{
	int i=1;
	for(;i<=10;)  //infinite loop
	{
		printf("%d. hii\n",i);
		i++;
		/*if(i==10)
		{
			printf("exiting loop\n");
			break; //terminates the loop 
		}*/
	}
	return 0;
}