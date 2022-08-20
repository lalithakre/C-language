#include<stdio.h>
void main()
{
//          sum of row in matrix:

    int i,j,a[3][3];
    printf("Enter elements of your array:");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Sum of row elements of an array is:");
    for(i=0;i<3;i++)
    { int sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf("\n Your sum of %d row is %d :",i,sum);
    }
}