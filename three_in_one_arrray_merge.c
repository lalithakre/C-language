#include<stdio.h>
void main()
{
    int a[3],b[2],c[5],d[10],i;
    printf("Enter first array elements:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter second array elements:");
    for(i=0;i<2;i++)
    {
        scanf("%d",&b[i]);
    } 
    printf("Enter third array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<3;i++)
    {
        d[i]=a[i];
    }
    for(i=0;i<2;i++)
    {
        d[i+3]=b[i];
    }
    for(i=0;i<5;i++)
    {
        d[i+5]=c[i];
    }
    printf("Your arrays after merging:");
    for(i=0;i<10;i++)
    {
        printf("%d",d[i]);
    }

}