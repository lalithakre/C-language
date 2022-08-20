#include<stdio.h>
void insertion_sort(int a[],int n);
void main()
{
    int a[20],n,i;
    printf("Enter how many numbers:");
    scanf("%d",n);
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    printf("Sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void insertion_sort(int a[],int n)
{
    int i,k,y;
    for(k=1;k<n;k++)
    {
       y=a[k]; 
        for(i=k-1;i>=0&&y<a[i];i--)
        {
        a[i+1]=a[i];
        }
    a[i+1]=y;
    }
}