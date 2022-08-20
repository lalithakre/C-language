#include<stdio.h>
#include<conio.h>
void quick_sort(int a[],int n,int m);
void main()
{
    int a[20],n,i;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    printf("Enter %d numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n);
    printf("Sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void quick_sort(int a[],int n,int m)
{
    int i,j,k,temp;
    i=m,j=n,k=a[m];
    while(i<j)
    {
       do
       {
           i++;
       } while(a[i]<k);
        do
        {
           j--;
        } while (a[i]>=k&&j>=0);
        if(i<j)
        {
            temp=a[i];
            a[j]=a[m];
            a[m]=temp;
            quick_sort(a,0,j-1);
            quick_sort(a,j+1,n);
        }
    }
}