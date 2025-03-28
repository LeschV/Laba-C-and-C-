#include <stdio.h>
void reverse_array(int arr[], int n)
{
    for (int i = 0, j = n - 1; i != n / 2, j != n / 2; ++i, --j)
    {
        int rev = arr[i];
        arr[i] = arr[j];
        arr[j] = rev;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse_array(arr, n);
    printf("Inverted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}