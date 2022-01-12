#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,*new_ptr,i;
    ptr=(int*)malloc(3*sizeof(int));
    for(i=0;i<3;i++)
    {
        *(ptr+i)=i+10;
    }
    for(i=0;i<3;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n--------------------\n");
    new_ptr=(int*)realloc(ptr,4*sizeof(int));
    *(new_ptr+3)=40;
    for(i=0;i<4;i++)
    {
        printf(" %d\t",*(new_ptr+i));
    }
        printf("\n--------------------\n");
     for(i=0;i<4;i++)
    {
        printf(" %d\t",*(ptr+i));
    }
    return 0;
}