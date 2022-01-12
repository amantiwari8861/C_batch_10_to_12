#include<stdio.h>

int main()
{
    int day;
    printf("enter the day between 1 to 7 \n");
    scanf("%d",&day); //2

    switch (day)
    {
    case 1 :printf("today is sunday\n");
        break;
    
    case 2 :printf("today is monday\n");
        break;
    
    case 3 :printf("today is tuesday\n");
        break;
    
    case 4 :printf("today is wednesday\n");
        break;
    
    case 5 :printf("today is thrusday\n");
        break;
    case 6 :printf("today is friday\n");
        break;
    
    case 7 :printf("today is saturday\n");
        break; 
    case 58 :printf("today is our day \n");
        break; 
    // case 'M' :printf("u r male  \n");
    //     break;
    default:printf("invalid day! \n");
    }


    return 0;
}


/* h.w  area of trapezium,triangle 
volume of cone ,shpere,cylinder
simple interest,compound interest,
maths formulas like (a+b)^3 
grade calculator , percentage calculator,
swapping of two variable with and without third variable
,even ,odd,leap year,prime no,year name to digit.*/