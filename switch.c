#include<stdio.h>
int main()
{
    int day;
    printf("enter the day :");
    scanf("%d",&day);

    switch(day)
    {
        case 1:  printf("Monday \n");
                break;
        case 2:  printf("tuesday \n");
                break;
        case 3:  printf("wednesday \n");
                break;
        case 4:  printf("thrusday \n");
                break;
        case 5:  printf("friday \n");
                break;
        case 6:  printf("saturday \n");
                break;
        case 7:  printf("sunday \n");
                break;
        default:  printf("invalid day\n");
                break; 
    }
    return 0;
}
