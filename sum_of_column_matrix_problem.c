#include<stdio.h>
void main()
{

    //          sum of column in matrix:

    int i,j,a[3][3];
    printf("Enter elements of your array:");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[j][i]);
        }
    }
    printf("\n Sum of column elements of an array is:");
    for(i=0;i<3;i++)
    {
           int sum =0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[j][i];
        }
        printf("\n Your sum of column is %d :",sum);
    }
}