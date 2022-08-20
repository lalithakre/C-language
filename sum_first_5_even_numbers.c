#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=0;i<12;i++)
   /* {
        a[i]=i+2;
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    */
   if(i%2==0)
   {
       sum=sum+i;
   }
   printf("your sum of first five even numbers is %d",sum);
}