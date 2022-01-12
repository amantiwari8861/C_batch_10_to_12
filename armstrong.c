#include<stdio.h>

int main()
{
	int num,original,rem,result=0;
	printf("enter the number to check \n");
	scanf("%d",&num); //assume num = 153 
	/*
		num = 1*1*1 + 5*5*5 + 3*3*3 ;
			= 1 + 125 + 27
			= 153
			original = num;
			rem =num%10; => 3
			result =result + rem*rem*rem; =>0 + 27 =>27
			num =num/10; =>15
			
			rem=num%10;  => 5
			result=result + rem*rem*rem; =>27 + 125 =>152
			num=num/10; =>1 
			
			rem=num%10; =>1
			result=result + rem*rem*rem; =>152 + 1 =>153
			num=num/10; 

	*/
	original=num;
	for(;num!=0;)
	{
		rem=num%10;
		result=result + rem*rem*rem;
		num=num/10;
	}
	if(original == result)
	{
		printf("%d is armstrong no. \n",original);
	}
	else
	{
		printf("not a armstrong no. \n");
	}
	return 0;
}