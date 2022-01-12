#include<stdio.h>

int main()
{
    int age;
    printf("enter the age :");
    scanf("%d",&age);

    if (age<120 && age>0)
    {
        printf("valid age !\n");

      if (age<18)
      {
            printf("between 0 to 18\n");
            if (age<12)
            {
                printf("childrens not allowed\n");
                if (age<5)
                {
                    printf("kids not allowed\n");
                }
            }
            else
            {
                printf("teenagers wait for some years \n");
            }
      }
      else if (age==18)
      {
          printf("congrats for 1st time vote\n ");
      }
      else
      {
          printf("between 19 to 120 \n");
          if (age>60)
          {
              printf("u will get 1000rs for vote \n");
          }
          
      }
    }
    else
    {
        printf("invalid age!\n");
    }
    
    

    return 0;
}
