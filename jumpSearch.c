#include <stdio.h>
#include <math.h>
int jump_search(int *arr, int n, int ele)
{
    // jump search
    int low = 0;
    int jump = ((n*25)/100);
    for (int i = 0; i < n; i + jump)
    {
        if (arr[i] == ele)
        {
            return i;
        }
        if (arr[i] < ele)
        {
           low =i;
        }
        if (arr[i] > ele)
        {
            break;
        }
    }
    for (int i = low; i < n; i++)
    {
        if (arr[i] == ele)
        {
            return i;
        }

        return -1;
    }
}
int main()
{
    int arr[10], i, j, n, ele;
    printf("Enter size of array\n");
    scanf("%d", &n);
    printf("you entered %d num\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%3d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%3d", arr[i]);
    }
    printf("\nEnter the element which you wants to find in an array\n");
    scanf("%d", &ele);
    int value = jump_search(arr, n, ele);
    if (value == -1)
        printf(" element has not found \n");
    else
        printf("Element has found at index %d\n", value);
    return 0;
}