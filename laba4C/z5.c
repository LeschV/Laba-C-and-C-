#include <stdio.h>
#include <limits.h>
int find_min(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i != n; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int find_max(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i != n; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
double find_average(int arr[], int n)
{
    double average;
    for (int i = 0; i != n; ++i)
    {
        average += arr[i];
    }
    return average / n;
}
double find_median(int arr[], int n)
{
    double median;
    return median = (arr[(n / 2) - 1] + arr[(n / 2)]) / 2;
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
    printf("Min of array: %d\n", find_min(arr, n));
    printf("Max of array: %d\n", find_max(arr, n));
    printf("Average of array: %.2f\n", find_average(arr, n));
    printf("Mediana: %.2f\n", find_median(arr, n));
    return 0;
}