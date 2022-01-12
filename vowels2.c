#include<stdio.h>
int main()
{
    char choice;
    printf("enter any character \n");
    scanf("%c",&choice);
    switch(choice)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':break;
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':printf("this is vowel \n");
            break;
        default :printf("this is consonant \n");
        break;
    }
    return 0;
}