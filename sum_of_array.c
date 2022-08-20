#include<stdio.h>
void main()
{
    int d[10],i,sum=0;
    int size;
    printf("Enter a size of an array:");
    scanf("%d",&size);
    printf("Enter %d array elements:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&d[i]);
    }
    for(i=0;i<size;i++)
    {
        sum = sum+d[i];
    }
    printf("Sum of array is %d:",sum);
}