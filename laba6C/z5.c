#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR_NAME 20
int main()
{

    char **name_of_candidates = NULL;
    printf("Input num of candidates:");
    int num_of_cand;
    scanf("%d", &num_of_cand);
    name_of_candidates = (char **)malloc(num_of_cand * sizeof(char));
    if (name_of_candidates == NULL)
    {
        printf("Memory allocation failed\n"); // Проверка на выделение памяти
        return 1;
    }
    for (int i = 0; i != num_of_cand; ++i)
    {
        name_of_candidates[i] = (char *)malloc(20 * sizeof(char));

        if (name_of_candidates[i] == NULL)
        {
            printf("Memory allocation failed\n"); // Проверка на выделение памяти
            return 1;
        }
    }
    char name[MAX_STR_NAME];
    for (int k = 0; k != num_of_cand; ++k)
    {
        printf("Input names of candidates:\n");
        scanf("%s", &name);
        memcpy(name_of_candidates[k], name, MAX_STR_NAME * sizeof(char));
    }
    printf("There are %d candidates:\n", num_of_cand);
    for (int j = 0; j != num_of_cand; ++j)
    {
        printf("%d:%s\n", j + 1, name_of_candidates[j]);
    }

    int vote;
    int *vote_counters = (int *)calloc(num_of_cand, sizeof(int));
    do
    {
        printf("\n Who for u want to vote?\n");
        scanf("%d", &vote);
        if ((vote <= num_of_cand) && (vote > 0))
        {
            --vote;
            vote_counters[vote]++;
            for (int j = 0; j != num_of_cand; ++j)
            {
                printf(" %.20s : %d votes\n", name_of_candidates[j], vote_counters[j]);
            }
            ++vote;
            printf("\n");
        }
        else
        {
            printf("Vote is over");
            break;
        }

    } while (vote > 0);
    free(name_of_candidates);
    return 0;
}