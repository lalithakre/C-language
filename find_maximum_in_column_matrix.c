#include <stdio.h>
void main()
{
    //          sum of column in matrix:

    int i, j, a[3][3], max = 0, min;
    printf("Enter elements of your array:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[j][i]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", a[j][i]);
        }
        printf("\n");
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j]>max;  
            max=a[i][j];
            
        }
        printf("\n maximum element  is %d :", max);
    }
}    