#include <stdio.h>
int main()
{

    float speed, size;
    printf("Please, input speed in mgb and size of file in mb:\n");
    scanf("%f %f", &speed, &size);
    printf("If the speed = %.2f, u'll have your file(%.2f mb's) loaded approximately by %.2f seconds", speed, size, size / (speed / 8));

    return 0;
}