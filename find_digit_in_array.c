#include<stdio.h>
void main()
{
    int d[10],i,num;
    printf("Enter 10 array elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&d[i]);
    }  
    printf("Enter number to find in an array :");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(d[i]==num)
        {
            printf("Digit find at index number %d\n",d[i]);
            break;
        }
        else
        {
        printf("Digit not found in an array:");
        }
    }

}