#include<stdio.h>
int main()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i>=2 && j==1 ||j==2 )
            {
                if(j==1)
                printf("*");
                else if(j==2)
                printf(" ");
            }
            else
            {
                printf("%c",65+j);
            }
        }
        printf("\n");
    }


    return 0;
}