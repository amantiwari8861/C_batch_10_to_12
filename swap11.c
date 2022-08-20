#include<stdio.h>
int main()
{
    int juice,water,glass3;
    printf("enter 2 values :");
    scanf("%d%d",&juice,&water); // 30 50

    printf(" a =%d and b=%d before swapping \n",juice,water); // 30 50
    
    //swapping with temporary variable (3rd variable)
    // glass3=juice;  // glass3=juice => glass3=30
    // juice=water;   // juice=water => juice=50
    // water=glass3;  // water=glass3 => water=30

    //swapping without using temporary variable (3rd variable)
    juice=juice+water; // juice=30+50 -> juice=80
    water=juice-water; // water=80-50 -> water=30
    juice=juice-water; // juice=80-30 -> juice=50

    printf(" a =%d and b=%d after swapping \n",juice,water);// 50 30
    return 0;
}