#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("Enter how many nom do you want to insert in array");
    scanf("%d",&n);
    printf("Enter %d number:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nYour array in reverse order will be :");
    for(i=n-1;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }
}