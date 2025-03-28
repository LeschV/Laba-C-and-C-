#include <stdio.h>
#include <string.h>
int filter_condition(int num)
{
    int counter = 0;
    if (num > 0)
    {
        for (int i = 1; i != num + 1; ++i)
        {
            if ((num % i) == 0)
            {
                ++counter;
            }
        }
    }
    if (counter == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int cleaning_array(int *array, int n, int (*filter_condition)(int))
{
    int check;
    int newSize = n;
    for (int i = 0; i != n; ++i)
    {
        check = filter_condition(array[i]);
        if (check == 1)
        {
            for (int j = i; j != newSize - 1; ++j)
            {
                array[j] = array[j + 1];
            }
            newSize--;
        }
    }
    return newSize;
}

int main()
{
    int array[1001], size = 1001;
    for (int i = 0; i != size; ++i)
    {
        array[i] = i;
        printf("%d ", array[i]);
        if (i % 10 == 0)
        {
            printf("\n");
        }
    };
    printf("\n\n");
    int newSize = cleaning_array(array, size, filter_condition);
    for (int i = 0; i != newSize; ++i)
    {
        printf("%d ", array[i]);
    };
    return 0;
}