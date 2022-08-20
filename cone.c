//cone 1/3 pi r * r * h

#include<stdio.h>
#include<conio.h>
int main()
{
    float radius,height,volume;
    printf("enter the radius ");
    scanf("%f",&radius);
    printf("enter the height ");
    scanf("%f",&height);

    volume=1.0/3.0*3.14*radius*radius*height;

    printf("volume of cone is %f ",volume);
    float rate =5.0; 

    float amount=volume*rate;
    printf("amount is %0.2f ",amount);


    // int amount;
    // printf("enter the amount ");
    // scanf("%d",&amount);

    // printf("amount is %d ",amount);

    getch();
    return 0;
}
