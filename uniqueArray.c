#include <stdio.h>
int countDistinct(int a[], int n)      //Function Definition
{
   int i, j, count = 1;
   //Traverse the array
   for (i = 1; i < n; i++)      //hold an array element
   {
      for (j = 0; j < i; j++)   
      {
         if (a[i] == a[j])    //Check for duplicate elements
         {
            break;             //If duplicate elements found then break
         }
      }
      if (i == j)
      {
         count++;     //increment the number of distinct elements
      }
   }
   return count;      //Return the number of distinct elements
}
int main()
{
    int n;       //Declare array size
    printf("Enter the number of elements \n");
    scanf("%d",&n);    //Initialize the array size

    int a[n];   //Array Declaration
    printf("Enter the array elements : ");
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);   //Initialize the array elements

    int c= countDistinct(a,n);       //Function Call
    printf("The number of distinct elements are %d",c);   //Print the number of distinct elements
    return 0;
}
