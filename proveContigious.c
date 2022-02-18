#include<stdio.h>
int main()
{
    int a[100],n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d numbers: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] stored at %d\n", i, &a[i]);
    }
    return 0;
}
