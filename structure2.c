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

    struct Animal dog,horse;
    // int num,num1;

    // dog.name="Bolt";
    strcpy(dog.name,"Bolt");
    dog.age=2;
    dog.weight=30.5;
    dog.gender='M';
    printf(" the name of dog is %s \n",dog.name);
    printf(" the age of dog is %d years\n",dog.age);
    printf(" the gender of dog is %c \n",dog.gender);
    printf(" the weight of dog is %f \n",dog.weight);

    horse.weight=60.9;
    printf("the weight of horse is %f ",horse.weight);






    return 0;
}
