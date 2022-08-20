#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[],int n);
void main()
{
    int a[20],n,i;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    printf("enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    printf("Sorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void bubble_sort(int a[],int n)
{
    int temp,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j=n-i;j++)
        {
        if(a[j]>a[j+1])
           {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
        }
    }
}