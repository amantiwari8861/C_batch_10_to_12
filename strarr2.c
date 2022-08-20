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

    struct Animal als[50];

    als[0].weight=56.7;
    als[1].weight=89.7;
    als[2].weight=43.7;


    printf("animal 1 weight : %f \n ",als[0].weight);
    printf("animal 2 weight : %f \n ",als[1].weight);
    printf("animal 3 weight : %f \n ",als[2].weight);
    

    return 0;
}