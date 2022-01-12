#include<stdio.h>
int main()
{
    float h,b,area;
    char ch='y';
    do
    {
        if(ch=='n'||ch=='N')
        {
            printf("Thankyou! for using \n");
            break;
        }
        else if(ch=='y'||ch=='Y')
        {
            printf("enter the base and height \n");
            scanf("%f%f",&b,&h);
            area=b*h/2;
            printf("the area is %f \n",area);
            printf("u wanna continue  y/n \n");
            fflush(stdin);
            scanf("%c",&ch);
            fflush(stdin);   
        }
        else
        {
            printf("invalid choice\n");
            printf("u wanna continue  y/n \n");
            fflush(stdin);
            scanf("%c",&ch);
            fflush(stdin); 
        }
    }while(1);
    return 0;
}