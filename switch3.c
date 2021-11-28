#include<stdio.h>
int main()
{
    int days;
    printf("enter the day :");
    scanf("%d",&days);

    switch(days)
    {
        case 1:printf("monday \n");
        break;
        case 2:printf("tue \n");
        break;
        case 3:printf("wed \n");
        break;
        case 4:printf("th \n");
        break;
        case 5:printf("fri \n");
        break;
        case 6:printf("sat \n");
        break;
        case 7:printf("sun \n");
        break;
        default:printf("invalid case!");
        break;
    }


    return 0;
}