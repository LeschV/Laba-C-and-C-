#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Input num of list:");
    int num;
    scanf("%d", &num);
    int *list = (int *)malloc(num * sizeof(int));
    int elem;
    for (int i = 0; i != num; ++i)
    {
        printf("Input elements:");
        scanf("%d", &elem);
        list[i] = elem;
        elem = 0;
    }
    printf("Your list:");
    for (int i = 0; i != num; ++i)
    {
        printf("%d ", list[i]);
    }
    printf("\n\n");
    printf("If u wanna delete some elements in this list, just input its num, or put \"0\" if u dont:");
    int delnum;
    scanf("%d", &delnum);
    --delnum;
    if (delnum > 0)
    {
        memmove(list + delnum, list + delnum + 1, (--num - delnum) * sizeof(int));
        printf("Your list after delete:");
        for (int i = 0; i != num; ++i)
        {
            printf("%d ", list[i]);
        }
    }
    else
    {
        printf("Your list after delete:");
        for (int i = 0; i != num; ++i)
        {
            printf("%d ", list[i]);
        }
    }
    printf("\n\n");
    return 0;
}
