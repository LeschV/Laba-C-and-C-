#include <stdio.h>

typedef enum Days
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
} Days;

int main()
{
    printf("Input num of the day:");
    Days day;
    scanf("%d", &day);
    switch (day)
    {
    case Monday:
        printf("Monday");
        break;
    case Tuesday:
        printf("Tuesday");
        break;
    case Wednesday:
        printf("Wednesday");
        break;
    case Thursday:
        printf("Thursday");
        break;
    case Friday:
        printf("Friday");
        break;
    case Saturday:
        printf("Saturday. For RUDN students it is NOT a weekend.");
        break;
    case Sunday:
        printf("Sunday - is a weekend");
        break;

    default:
        break;
    }

    return 0;
}