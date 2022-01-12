#include<stdio.h>
#include<string.h>
int main()
{
    char name[10],name2[10];
    // scanf("%[^\n]s",&name);
    // printf(" %s \n",name);
    gets(name);
    gets(name2);
    // puts(name);
    // int size=strlen(name);
    // strcat(name,name2);
    // puts(name);
    int result = strcmp(name,name2);
    printf("%d",result);
    // printf("%d \n",size);

    return 0;
}