#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],flag=1;
    printf("Enter first matrix element:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix element:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    return 0;
}