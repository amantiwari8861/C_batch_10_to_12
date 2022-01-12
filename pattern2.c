#include<stdio.h>
int main()
{
    int i,j,k=65;
    
    printf("enter the pattern element\n");
    for(i=0;i<5;i++)
	{
    	for(j=0;j<=i;j++)
    	{
//    		printf("%d\t",i+1);
//			printf("%c",k+i);
			printf("%c",k+j);
    	}
    	printf("\n");
    }
    return 0;
}

