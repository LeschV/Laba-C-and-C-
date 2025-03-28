#include <stdio.h>
void bubble_sort(int arr[], int n)
{
    int k;
    while (k != n)
    {
        for (int i = 0; i != n; ++i)
        {
            if (arr[i + 1] < arr[i])
            {
                int c = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = c;
            }
        }
        ++k;
    }
}
int main()
{
    int arr[] = {5, 2, 8, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubble_sort(arr, n);
    printf("After bubble_sort: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}