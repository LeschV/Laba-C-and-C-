#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("pls, input a num of colomns matrixs:\n");
    int col1, col2;
    scanf("%d%d", &col1, &col2);

    printf("pls, input a num of lines of matrixs:\n");
    int line1, line2;
    scanf("%d%d", &line1, &line2);

    int *matrix1 = (int *)malloc(col1 * line1 * sizeof(int));

    for (int i = 0; i != col1; ++i)
    {
        for (int j = 0; j != line1; ++j)
        {
            *(matrix1 + i * col1 + j) = rand();
        }
    }
    printf("\n\n");
    int *matrix2 = (int *)malloc(col2 * line2 * sizeof(int));

    for (int i = 0; i != col2; ++i)
    {
        for (int j = 0; j != line2; ++j)
        {
            *(matrix2 + i * col2 + j) = rand();
        }
    }

    int colm = col2, linem = line1;

    int *matrixmul = (int *)calloc(linem * colm, sizeof(int));

    int elem = 0;

    if (col1 == line2)
    {
        for (int i = 0; i != col1; ++i)
        {
            for (int k = 0; k != col1; ++k)
            {
                for (int j = 0; j != line1; ++j)
                {
                    elem += *(matrix1 + k * col1 + j) * *(matrix2 + j * line2 + i);
                }
                *(matrixmul + k * linem + i) = elem;
                elem = 0;
            }
        }
        printf("\n\n MATRIXMUL\n");

        for (int i = 0; i != colm; ++i)
        {
            for (int j = 0; j != linem; ++j)
            {
                printf("%d ", *(matrixmul + i * colm + j));
            }
            printf("\n");
        }
    }
    else
        printf("Can't be multyplied\n");

    free(matrix1);
    free(matrix2);
    free(matrixmul);
    return 0;
}