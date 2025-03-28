#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("pls, input a num of colomns\n");
    int col;
    scanf("%d", &col);

    printf("pls, input a num of lines\n");
    int line;
    scanf("%d", &line);

    int *matrix = (int *)malloc(col * line * sizeof(int));

    for (int i = 0; i != line; ++i)
    {
        for (int j = 0; j != col; ++j)
        {
            *(matrix + i * line + j) = rand();
            printf("%d ", *(matrix + i * line + j));
        }
        printf("\n");
    }

    free(matrix);
    return 0;
}