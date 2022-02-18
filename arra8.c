#include<stdio.h>
int main()
{
    // int a[100],n;
    int a[5]={10,20,30,40,50};
    // int a[]={10,20,30,40,50}; // also works
  /*   printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d numbers: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    } */
    for (int i = 0; i < 5; i++)
    {
        printf("at index %d is %d\n", i, a[i]);
    }
    return 0;
}
