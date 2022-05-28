#include<stdio.h>
int main()
{
    // int num;
    // printf("Enter a number: ");
    // scanf("%d", &num);

    // typecasting
    // float fnum = num; // upward cast
    // /* or */ float fnum = (float)num; 
    // printf("fnum =%f\n", fnum);

    // float fnum3 = 3.14; // downward cast
    // int inum = fnum3; //or int inum = (int)fnum3;
    // printf(" inum =%d\n", inum);

    //typecasting to char (based on ASCII value)
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int inum2 = ch; //or int inum2 = (int)ch;
    printf("inum2 = %d\n", inum2);

    char inum3 = 65; //or char inum3 = (char)65;
    printf("inum3 = %c\n", inum3);

    return 0;
}

/*
    typecasting is used to convert one data type to another data type.
    A -> 65
    B -> 66
    .    .
    Z -> 90

    a -> 97
    b -> 98
    .    .
    z -> 122

    0 -> 48
    1 -> 49
    .    .
    9 -> 57

    65+26 = 91 -1 = 90 (Z)
    97+26 = 123 -1 = 122 (z)
    48+10 = 58 -1 = 57 (9)
    */