#include<stdio.h>
void main()
{
    int a[3],b[2],c[5],i;
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
    for(i=0;i<3;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<2;i++)
    {
        c[i+3]=a[i];
    }
    printf("Your arrays after merging:");
    for(i=0;i<5;i++)
    {
        printf("%d",c[i]);
    }

}