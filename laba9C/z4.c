#include <stdio.h>

typedef struct Point
{
    float x, y;
} Point;

int main()
{
    printf("Input coordinates of point:");
    Point point;
    scanf("%f %f", &point.x, &point.y);
    printf("x : %.2f\ny : %.2f", point.x, point.y);
    return 0;
}