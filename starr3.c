#include<stdio.h>
#include<string.h>
int main()
{
    struct Animal
    {
        char name[20];
        int age;
        char gender;
        float weight;
    };

    struct Animal als[2];

    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        printf("enter the %d animal name :",i+1);
        scanf("%[^\n]s",&als[i].name);
        fflush(stdin);
        printf("enter the %d animal age :",i+1);
        scanf("%d",&als[i].age);
        fflush(stdin);

        printf("enter the %d animal gender :",i+1);
        scanf("%c",&als[i].gender);
        fflush(stdin);

        printf("enter the %d animal weight :",i+1);
        scanf("%f",&als[i].weight);
    }

    printf(" *************** Animals Data ******************\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Animal %d name :%s \n",i+1,als[i].name);
        printf("Animal %d age :%d \n",i+1,als[i].age);
        printf("Animal %d gender :%c \n",i+1,als[i].gender);
        printf("Animal %d weight :%f \n",i+1,als[i].weight);
    }
    

    

    return 0;
}