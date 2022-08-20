#include<stdio.h>
int main()
{
    // convert celsius to fahrenheit => (9/5)*celsius+32;

    float celsius,fahrenheit;
    printf("enter celsius :");
    scanf("%f",&celsius);

    fahrenheit=(9.0/5.0)*celsius+32;// / and * has same precedence
    printf("fahrenheit = %f",fahrenheit);

    return 0;
}
