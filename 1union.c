#include<stdio.h>
int main()
{    struct {
        char *name;
        union
        {
            char *sval;
        }u;
    }symtab[10];
    symtab[0].u.sval="neha";
    printf("%c",symtab[0].u.sval[0]);
    // printf("%c",*symtab[0].u.sval);
    return 0;
}