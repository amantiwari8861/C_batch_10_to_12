#include<stdio.h>
int  main( )
{
int  a[25], b[25], sum[50], i, j, k=1, n, m, s, temp ;
printf(" Enter the number of element in first array : ") ;
scanf("%d ",& n) ;
printf("\n Enter the element of araay : \n") ;
for (  i = 1 ; i < = n ; i++)
scanf("%d ",& a[i]) ;

printf(" Enter the number of element in second array : ") ;
scanf("%d ",& m) ;
printf("\n Enter the element of araay : \n") ;
for (  i = 1 ; i <=m ; i++)
scanf("%d ",& b[i]) ;
s = m + n ;

for (i = 1; i <= s; i++)
{
    if (i <= n)
        sum[i] = a[i];
    else
    {
        sum[i] = b[k];
        k = k + 1;
    }
}

for (  i = 1 ; i <= s ; i++)
{
for (  j = 1 ; j <= s ; j++)
{
if (  sum[i] >= sum[j] )
{
temp = sum[i] ;
sum[i] = sum[j] ;
sum[j] = temp ;
}
}
}
printf("\n Element of array after merging and sorting :\n") ;
for (  i = 1 ; i <= s ; i++)
pcanf("%d \t",sum[i]) ;
return ( 0 ) ;
}