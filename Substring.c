#include<stdio.h>
#include<string.h>
int main()
{
    // char name[]="hello my name is aman ";
    char *name2="my name is aman ";
    char *str;
    char *store;
    printf("enter the characters \n ");
    // gets(str);
    scanf("%[^\n]s",str);

    store=strstr(name2,str);

    printf("the substring is \"  %s \"  \n",store);
    return 0;
}