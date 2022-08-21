#include <stdio.h>
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int n, ele, lead = 1, i, j;
    printf("How many size array you wants to create :\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in an array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(arr, n);
    for (i = 0; i < n; i++)
    {

        for (j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                break;
            }
        }
        if (j == n)
        {
            printf("Leader is %d\n", arr[i]);
        }
    }
    
    return 0;
}