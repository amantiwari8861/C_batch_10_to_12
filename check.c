#include<stdio.h>

int main()
{
    int input=0,original,rem,result=0;
    for(int input=0;input<10;input++)
    {
             rem=input%10;
             result=result+rem*rem*rem;
             input=input/10;
             if(result==original)
        {
             printf("%d armstrong no.\n",input);
         }             
    }
for(i=0; i<1000; i++)
{
    for()
}
    return 0;
}

/*

  if(input%2==0)
        {
            printf("%d is even \n",input);
        }
        else{
            printf("%d is odd\n",input);
        }


  // original=input;
        while(input>0)
        {
            // rem=input%10;
            // result=result+rem*rem*rem;
            // input=input/10;
            if(input%2==0)
            {
                // result=input;
                printf("%d is even \n",input);
            }
            else{
                printf("odd\n");
            }
        }
        // if(result==original)
        // {
        //     printf("%d armstrong no.\n",input);
        // }
        */