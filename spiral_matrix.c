#include<stdio.h>

void main()
{
    int m,p;
    printf("Enter your dimension for row:-");
    scanf("%d",&m);
    printf("Enter your dimension for column:-");
    scanf("%d",&p);
    int arr[m][p];
    printf("Enter %d*%d Array\n",m,p);
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <p; j++)
        {
            scanf("%d",&arr[i][j]);
        }  
    }
    printf("YOur matrix is:-\n");
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j<p; j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("After spiral your matrix is:-\n");
    int n,k=0,l=0;
    int last_row=m-1,last_col=p-1;
    while(k<=last_row && l<=last_col)
    {
        for(n=l;n<=last_col;n++)
        {
            printf(" %d ",arr[k][n]);
        }
        k++;
        for(n=k;n<=last_row;n++)
        {
            printf(" %d ",arr[n][last_col]);
        }
        last_col--;
        if(k<=last_row)
        {
            for(n=last_col;n>=l;n--)
            {
                printf(" %d ",arr[last_row][n]);
            }
            last_row--;
        }
        if(k<=last_col)
        {
            for(n=last_row;n>=k;n--)
            {
                printf(" %d ",arr[n][l]);
            }
            l++;
        }
    }  
}