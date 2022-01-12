#include<stdio.h>
int main()
{
    char arr[20];
    // char arr2[]="hello sir";
    printf("enter ur name \n");
    //scanf("%[^\n]s",&arr);
    gets(arr);
    fflush(stdin);
    puts(arr);
    //printf("the name is %s \n ",arr);
    // printf("the name is %s \n ",arr2);
    return 0;
}