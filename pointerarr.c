#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    char *substr;
    printf("enter the name \n");
	//hello my name is aman bsdbjsdjdhbhjb
    gets(name);
    fflush(stdin);
    substr=strstr(name,"aman");
    /*printf("the length is %d \n",strlen(name));
    printf("the lower case is %s \n",strlwr(name));
    printf("the upper case is %s \n",strupr(name));
    printf("the reverse string is %s \n",strrev(name));*/
    printf("the substr is %s \n",substr);
    
    return 0;
}