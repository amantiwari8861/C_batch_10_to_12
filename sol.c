/*  C Program to merge two sorted array in descending order  */

#include <stdio.h>
#define MAX_SIZE 100 //Maximum size of the array

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int size1, size2, size3;
    int i, j, k;

    /*
     * Reads size of first array and element in first array
     */
    printf("Enter the size of first array : ");
    scanf("%d", &size1);
    printf("\nEnter elements in first array :: \n");
    for(i=0; i<size1; i++)
    {
        printf("\nEnter %d element in first array :: ",i+1);
        scanf("%d", &arr1[i]);
    }

    /*
     * Read size of second array and elements in second array
     */
    printf("\nEnter the size of second array : ");
    scanf("%d", &size2);
    printf("\nEnter elements in second array : \n");
    for(i=0; i<size2; i++)
    {
        printf("\nEnter %d element in second array :: ",i+1);
        scanf("%d", &arr2[i]);
    }

    /* size of merged array is size_of_first_array + size_of_second_array */
    size3 = size1 + size2;

    /*
     * Merges both array in descending order
     */
    for(i=0, j=0, k=0; i<size3; i++)
    {
        /*
         * If all elements of one array
         * is merged to final array
         */
        if(j >= size1 || k >= size2)
        {
            break;
        }

        if(arr1[j] > arr2[k])
        {
            arr3[i] = arr1[j];
            j++;
        }
        else
        {
            arr3[i] = arr2[k];
            k++;
        }
    }

    /*
     * Merge the remaining elements of array
     */
    while(j < size1)
    {
        arr3[i] = arr1[j];
        i++;
        j++;
    }
    while(k < size2)
    {
        arr3[i] = arr2[k];
        i++;
        k++;
    }

    /*
     * Prints the merged array
     */
    printf("\nArray merged in descending order : ");
    for(i=0; i<size3; i++)
    {
        printf(" %d ", arr3[i]);
    }

    return 0;
}