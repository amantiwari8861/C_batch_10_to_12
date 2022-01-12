#include<stdio.h>
int main()
{
    char name[20];
    printf("enter ur name \n");
    // scanf("%[^\n]s",&name);
    // gets(name);
    fgets(name,20,stdin); //20 bytes
    // printf("the name is %s \n",name);
    // puts(name);
    fputs(name,stdout);
    return 0;
}