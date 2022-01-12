#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number :\n");
    scanf("%d%d%d",&a,&b,&c);//10 50 20
    if ((a>b) && (a>c)  )
    {
        printf("%d is largest \n",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is largest \n",b);
    }
    else
    {
        printf("%d is largest \n",c);
    }
    return 0;
}