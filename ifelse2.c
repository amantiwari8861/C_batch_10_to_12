#include<stdio.h>

int main()
{
    // take percentage from user and check the grades 
    // 80 - 100 A
    // 60 - 80 B
    // 50 - 60 c 
    // 33 - 50 D
    // 0 - 33 fail 

    int pmark;

    printf("  input the value \n");
    scanf("%d",&pmark);

    // if(pmark >=80 )
    // if(pmark >=80 relational operator   pmark<=100 )
    // if(pmark >=80 ||   pmark<=100 )
    if(pmark >=80 &&   pmark<=100 )
    {
        printf("A grade \n");
    }
    else
    {
        printf(" you didn't get A grade \n");
    }
/*
case 1 : let pmark= 500    
        500>80 true condition 1
        500 <=100 false  condition 2
        true || false =>  true 

case 2: pmark = 15 
        15>80 false
        15<100 true 
        false || true ==> true

let we take && 

case 1 : 500
        500>80 true
        500<100 false
        T && F =>> F 

case 2: 15
        15>80 false 
        15<100 true 
        F && T => F 

and gate is best for these situations */

    return 0;
}