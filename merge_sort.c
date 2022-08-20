#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("Enter how many numbers do you want to insert in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}