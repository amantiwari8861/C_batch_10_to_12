#include<stdio.h>
int main()
{
    int days;
    printf("enter the day :");
    scanf("%d",&days);

    if (days==1)
    {
        printf("monday \n");
    }
    else if (days==2)
    {
        printf("tuesday \n");
    }
    else if (days==3)
    {
        printf("wednesday \n");
    }
    else if (days==4)
    {
        printf("thrusday \n");
    }
    else if (days==5)
    {
        printf("friday \n");
    }
    else if (days==6)
    {
        printf("saturday \n");
    }
    else if (days==7)
    {
        printf("sunday \n");
    }
    else
    {
        printf("invalid day !");
    }
    
    
    


    return 0;
}
