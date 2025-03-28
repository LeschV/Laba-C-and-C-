
#include <stdio.h>
#define M 10
#define N 20

void transpose(int A[][N], int B[][M])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            B[i][j] = A[j][i];
}

int main()
{

    int matrix[M][N];

    for (int i = 0; i != M; ++i)
    {
        for (int j = 0; j != N; ++j)
        {
            matrix[i][j] = j;
        }
    }

    printf("Given matrix:\n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    int transmatrix[N][M];

    transpose(matrix, transmatrix);

    printf("Result matrix is \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            printf("%d ", transmatrix[i][j]);
        printf("\n");
    }

    return 0;
}
