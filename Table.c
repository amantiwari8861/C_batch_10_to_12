#include<stdio.h>
int main()
{
    int num=5,step=4,i;

    for ( i = 1; i <= step; i++)
    {
        printf("%d X %d = %d \n",num,i,num*i);
    }
    
    /*    psuedocode (Dry Run)
    step 1:   i=1 , num=5 ,step=4
               i <= step
               1<=4 true
              num X i = num*i
                5 X 1 = 5

    step 2:   i=2 , num=5 ,step=4
                i <= step
                2<=4 true
                  num X i = num*i
                 5 X 2 = 10

    step 3:   i=3 , num=5 ,step=4
                i <= step
                3<=4 true
                  num X i = num*i
                 5 X 3 = 15
    
    step 4:   i=4 , num=5 ,step=4
                i <= step
                4<=4 true
                  num X i = num*i
                 5 X 4 = 20
    
    step 5:   i=5 , num=5 ,step=4
                i <= step
                5<=4 false
                loop terminates.
    */




    return 0;
}
