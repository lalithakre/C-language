#include<stdio.h>
#include<conio.h>
void selection_sort(int a[],int n);
void main() 
{
int a[20],n,i;
printf("**program for selection sort**");
printf("\nEnter how many numbers:");
scanf("%d",&n);
printf("Enter %d numbers:",n);
for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
selection_sort(a,n);
printf("Sorted array is:");
for(i=0;i<n;i++)
    {
     printf("\n%d",a[i]);   
    }    
}
void selection_sort(int a[],int n)
{
    int i,j,temp,min;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=j+1;j<n-1;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;    
    }
}