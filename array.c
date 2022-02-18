#include<stdio.h>
int main()
{
    int a[5];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    // a[4] = 50;
    scanf("%d",&a[4]);

    printf("%d \n", a[0]);
    printf("%d \n", a[1]);
    printf("%d \n", a[2]);
    printf("%d \n", a[3]);
    printf("%d \n", a[4]);


    return 0;
}
