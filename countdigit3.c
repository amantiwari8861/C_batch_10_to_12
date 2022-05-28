#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d", &num);//456

    while (num>0)
    {
        count++;
        num=num/10;
    }
    printf(" total digit length is %d ",count);

    return 0;
}
/*          psuedocode
  
    step 1:  count=0 ,num =456 
            456>0 true
            count++ -> 1
            num = 456/10 -> 45.6 -> 45

    step 2: count=1 ,num=45
        45>0 true
        count++ -> 2
        num = 45/10 -> 4.5 -> 4

    step 3: count=2 ,num=4
        4>0 t
        count++ -> 3
        num = 4/10 -> 0.4 -> 0
    
    step 4: count=3 ,num=0
        0>0 false loop exit

        */










