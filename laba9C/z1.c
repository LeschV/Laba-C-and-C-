#include <stdio.h>

typedef enum ServiceRating
{
    Poor = 1,
    Average,
    Good,
    Excelent
} ServiceRating;

int main()
{
    printf("How do you rate out testaurant from 1 to 4?");
    ServiceRating answer;
    scanf("%d", &answer);
    switch (answer)
    {
    case Poor:
        printf("Poor");
        break;
    case Average:
        printf("Average");
        break;
    case Good:
        printf("Good");
        break;
    case Excelent:
        printf("Excelent");
        break;

    default:
        break;
    }

    return 0;
}
