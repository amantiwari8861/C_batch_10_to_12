#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks \n");
    scanf("%d",&marks);
    //C uses top to bottom approach 
    if(marks>=80 && marks <=100)   //80-100
    {
        printf("A grade \n");
    }
    else if(marks>=60 && marks<80) //60-79
    {
        printf("B grade \n");
    }
    else if(marks>=50 && marks<60) //50-59
    {
        printf("C grade \n");
    }
    else if(marks>=33 && marks<50) //33-49
    {
        printf("d grade \n");
    }
    else if(marks>=0 && marks<33) //0-32
    {
        printf("Fail \n");
    }
    else
    {
        printf("invalid marks \n");
    }
    return 0;
}

        //printf("valid marks \n");
        // nested if 
        // or else if ladder