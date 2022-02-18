#include<stdio.h>
int main()
{
    int day;
    printf("enter the day \n");
    scanf("%d",&day);//2
    switch (day)
    {
    case 54:
        printf("monday ! \n");
        break;
    case 2:
        printf("tuesday ! \n");
        break;
    case 3:
        printf("wed ! \n");
        break;
    case 4:
        printf("thr ! \n");
        break;
    case 5:
        printf("fri ! \n");
        break;
    case 6:
        printf("sat ! \n");
        break;
    case 7:
        printf("sun ! \n");
        break;
    
    default:printf("invalid day !");
        break;
    }

    return 0;
}
