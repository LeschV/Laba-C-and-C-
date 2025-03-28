#include <stdio.h>
#include <stdlib.h>

int sum_array(int size, int *array)
{
    int sum = 1;
    if (size > 1)
    {
        sum = array[size - 1] + sum_array(size - 1, array);
        return sum;
    }
    else
    {
        return array[0];
    }
}

int main()
{
    printf("Put size of array:");
    int size;
    scanf("%d", &size);
    int *array = (int *)malloc(size * sizeof(int));
    for (int i = 0; i != size; ++i)
    {
        array[i] = i + 1;
    }
    printf("Sum of array = %d;", sum_array(size, array));
    return 0;
}