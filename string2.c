#include<stdio.h>
int main()
{
    char name[20],i,count=0;
    printf("enter ur name \n");
   // scanf("%[^\n]s",&name);
   gets(name);
   fflush(stdin);
    printf("the name is %s \n",name);
    //string:sequence of characters 
    for(i=0;name[i]!='\0';i++)
    count++;
    puts(name);
    //printf("the length is %d\n",count);  
    return 0;
}

    // for(int i=0;i<10;i++)
    // {
    //     scanf("%c",&name[i]);
    //     fflush(stdin);
    // }
    // printf("the name is :");
    // for(int i=0;i<10;i++)
    // {
    //     printf("%c",name[i]);
    // }