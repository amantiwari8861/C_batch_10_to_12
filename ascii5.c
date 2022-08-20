#include<stdio.h>
int main()
{
    char aman;
    printf("Enter a character: ");
    scanf("%c", &aman);

    if (aman >=65 && aman <=90)
    {
        printf("%c is an uppercase letter. with ascii value %d",aman,(int)aman);
    }
    
    char ch=(char)90;
    printf("\n %c",ch);

    return 0;
}
