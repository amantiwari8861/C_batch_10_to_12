#include<stdio.h>
struct name{
	int id;
	char ch;
}e1;
int main(){
	scanf("%d",&e1.id);
	printf("value of id=%d\n",e1.id);
	scanf("%c",&e1.ch);
	scanf("\n");
	printf("Name=%d anything\n",e1.ch);		
	return 0;																												
}
