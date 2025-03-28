#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("pls, input a num:");
    int sizear;
    scanf("%d", &sizear);

    int *array = (int *)malloc(sizear * sizeof(int));

    int sum = 0;
    for (int i = 0; i != sizear; ++i)
    {
        printf("Input %d num in array:", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("%d", sum);

    free(array);
    return 0;
}