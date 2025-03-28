#include <stdio.h>
typedef struct Time
{
    int hours, minutes, seconds;
} time;

void printTime(time Time)
{
    printf("%d:%d:%d\n", Time.hours, Time.minutes, Time.seconds);
}

int main()
{
    time Time;
    printf("Input hours:");
    scanf("%d", &Time.hours);
    printf("Input minutes:");
    scanf("%d", &Time.minutes);
    printf("Input seconds:");
    scanf("%d", &Time.seconds);
    printTime(Time);

    return 0;
}