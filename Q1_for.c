#include<stdio.h>
int main()
{
    int num,feven=0,seven=0,fodd=0;
    printf("enter the number :");
    scanf("%d",&num);

    if (num %2 != 0 )
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d \n",num,i,num*i);
            if ((num*i)%2 == 0 && feven==0)
            {
                feven=num*i;
            }
            if ((num*i)%2 == 0 && i==4)
            {
                seven=num*i;
            }
        }
        fodd=num;
        // for (int i = feven; i <=seven;i=i+fodd)
        // {
        //     printf(" %d ",i);
        // }
        for (int i = 0; i < 12; i++)
        {
            printf("%d ",feven);
            feven=feven+fodd;
        }
        
        

    }
    else
    {
        printf("A.P not possible ");
    }
    
    



    return 0;
}
