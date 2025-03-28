#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matrix[10][20];
    for (int i = 0; i != 10; ++i)
    {
        for (int j = 0; j != 20; ++j)
        {
            matrix[i][j] = rand() % 100 + 1;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int max = INT_MIN;
    int arr[10];
    for (int i = 0; i != 10; ++i)
    {
        arr[i] = max;
    }

    for (int i = 0; i != 10; ++i)
    {
        for (int j = 0; j != 20; ++j)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                arr[i] = max;
            }
        }
        max = INT_MIN;
    }

    int sum = 0;
    for (int i = 0; i != 10; ++i)
    {
        sum += arr[i];
    }

    printf("Sum of max.elemets of this matrix = %d ", sum);
    return 0;
}
