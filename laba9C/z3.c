#include <stdio.h>

typedef enum TrafficLight
{
    Red,
    Yellow,
    Green,
} TrafficLight;

int main()
{
    printf("Input condition of a traffic light:");
    TrafficLight answer;
    scanf("%d", &answer);
    switch (answer)
    {
    case Red:
        printf("STOP!");
        break;
    case Yellow:
        printf("Ready");
        break;
    case Green:
        printf("Go");
        break;

    default:
        break;
    }

    return 0;
}