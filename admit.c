#include<stdio.h>
int main()
{
    int subject;
    float fifty,total=0;
    printf("Enter the subject number: ");
    scanf("%d", &subject);
    int marks[subject];
    printf("Enter 5 numbers: ");
    for(int i=0;i<subject;i++)
    {
        scanf("%f",&marks[i]);
    }

    for(int i=0;i<subject;i++)
    {
        total=total+marks[i];
    }
    if (marks[1] >= 50 && marks[2]>=60)
        {
            fifty=total * 0.5;
            if(total>=fifty)
            {
                printf("\nAdmission is granted");
            }
            else
            {
                printf("\nAdmission is not granted");
            }
        }
        else
        {
            printf("\nAdmission is not granted bcz of marks is low in math and science\n");
        }
    return 0;
}
