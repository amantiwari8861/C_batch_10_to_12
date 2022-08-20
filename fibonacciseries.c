#include<stdio.h>
int main()
{
    //fibonnaci series : 0 1 1 2 3 5 8 13 21 34 
    int term;
    printf("Enter the term: ");
    scanf("%d",&term);//10

    int first=-1,second=1,next;
    for(int step=0;step<term;step++)
    {
        next = first+second;
        printf("%d ",next);// 0 1
        first=second;
        second=next;
    }
   
    return 0;
}