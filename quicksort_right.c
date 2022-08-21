#include<stdio.h>
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void printarray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
}   
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }    
        swap(&arr[i+1],&arr[high]);
        return(i+1);
}
void quick_sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }
}
void main()
{
    int arr[20],i,j,n;
    printf(" : LALIT THAKRE : \n");
    printf("How many number:-");
    scanf("%d",&n);
    printf("Enter %d number:-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,n-1);
    printarray(arr,n);
}