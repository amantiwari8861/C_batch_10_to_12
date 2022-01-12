#include<stdio.h>
int swap(int x, int y);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%d\n b=%d\n",a,b);
    printf("\n after swap \n");
    swap(a,b);
    
}
int swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d\n y=%d",x,y);
    return 0;

}

    
