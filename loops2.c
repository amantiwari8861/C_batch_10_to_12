#include<stdio.h>
// 5 ==> 1 2 3 4 5 =>15 ans.
int main()
{
    int inputnum,i,num=0,result=0;
    printf("enter no. of numbers to be input \n");
    scanf("%d",&inputnum); //3

    for (i = 1; i <= inputnum; i++)
    {
        printf("input number %d \n",i);
        scanf("%d",&num);
        result+=num;
    }
    
    printf("the result is %d",result);
    return 0;
}

// try d cold total and betadin for gargal 5 ml in warm water twice a day 
//fever aaye toh mefkind forte half le lena
// for instant relief take sualin (roasted laung and adrak )
/*
    psuedo-code or dry-run
   assume inputnum=3;
step 1: i=1 
        i <= inputnum ==> 1 <= 3  true
        num=10; //assume user gives input 10
        result=result+num; ==>0+1 = 1
        i++ =>2
step 2: i=2
        2<=3  true
        num=20 //assume user gives 20
        resut=10+20; result = 30
        i++ =>3
step 3: i=3
        3<=3 true 
        num=30;
        result=60;  //answer
        i++ => i=4
step 4: i=4
        4<=3 false
        then loop breaks and after loop code works    
*/






        