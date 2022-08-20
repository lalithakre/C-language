#include<stdio.h>
//#include<conio.h>
void main()
{
    int a[20],n,i,m;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("which number you want to find");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m);
        printf("Number found successfully at %d position",i+1);
        break;
    } 
}