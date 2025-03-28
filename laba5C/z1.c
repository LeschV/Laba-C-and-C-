#include <stdio.h>
int main()
{

    int matrix[20][20];
    int size = 20;

    for (int i = 0; i != size; ++i)
    {
        for (int j = 0; j != size; ++j)
        {
            if (i == j || (i + j == size - 1))
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }

    for (int i = 0; i != size; ++i)
    {
        for (int j = 0; j != size; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}