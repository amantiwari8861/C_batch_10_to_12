#include<stdio.h>
#include<string.h>
int main()
{
    char name1[20],name2[30],i,count=0;
    printf("enter ur name \n");
    gets(name1);
   // gets(name2);
    strcat(name1," hello");//concatenate
    puts(name1);
    return 0;
}