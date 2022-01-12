#include<stdio.h>
#include<stdlib.h>
int main()
{
    int matr[3][3];
    int (*ptr)[3];
    ptr=matr;
    printf("enter the matrix \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(ptr+i)+j));
        }
    }
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    return 0;
}


  // int matr[][]={
    //                 {1,2,3},
    //                 {4,5,6},
    //                 {7,8,9}
    //              }