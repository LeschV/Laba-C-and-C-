#include <stdio.h>
void insert_element(int arr[], int index, int value)
{
    int n = 6;
    for (int i = n; i != index; --i)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
}
void delete_element(int arr[], int index)
{

    for (index + 1; index != 6; ++index)
    {
        arr[index] = arr[index + 1];
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
    insert_element(arr, 2, 10);
    printf("Array after insert: ");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    delete_element(arr, 2);
    printf("Array after delete: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}