#include <stdio.h>
int main()
{
  int rows, col, size;

  printf("Enter the number of rows in pyramid of stars to print\n");
  scanf("%d", &size);

  for (rows = 0; rows < size+1; rows++)  // Loop to print rows
  {
    for (col = 0; col < size-rows; col++)  // Loop to print spaces in a row 
      printf(" ");

	// printf("#");

    for (col = 0; col < 2*rows - 1; col++) // Loop to print stars in a row 
      printf("*");

    printf("\n");
  }

  return 0;
}