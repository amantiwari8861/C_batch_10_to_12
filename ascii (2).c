#include<stdio.h>

int main()
{
	int i;
	for(i=65;i<=90;i++)
	{
		printf("%c \n",i);
	}

	/*
	char ch='A'; //65
	int i;
	for(i=0;i<26;i++)
	{
		printf("%d. %c\n",i+1,(i+ch)); //65+i 
	}
	*/
	
	return 0;
}

/*
print table from different loops
take a input from user check whether it is a capital(A),small(a) alphabet,numeric or 
any number or special character(@$)
*/


// ASCII => American standard code for information interchange 
// A => 65 
// B => 66 
// .     .
// Z => 90

// a => 97
// b => 98
// .     .
// z => 122

// 0 => 48
// 1 => 49
// .     .
// 9 => 57