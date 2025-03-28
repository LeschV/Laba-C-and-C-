#include "z1.h"
#include "z2.h"

int main()
{
    printf("Check of 1st exercise:\n");
    int a, b;
    printf("input a , b:\n");
    scanf("%d %d", &a, &b);
    printf("sum = %d", sum(a, b));
    printf("\nCheck of 2nd exercise:\n\n");
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