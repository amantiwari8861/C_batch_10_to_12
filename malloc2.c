#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("read.bin","ab+");
    char sentence[100];
    int get=0;
    if(fptr==NULL)
    {
        printf("unable to open File ! \n");
        exit(0);
    }
    // fprintf(fptr,"the value is %d\n hello2.0",50);
    // fputs("hello world2.0 \n hello ",fptr);
    //fscanf(fptr,"%[^\n]s",sentence);
    //printf("%s",sentence);
    
    fclose(fptr);



    return 0;
}