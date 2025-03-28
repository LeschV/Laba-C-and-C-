#include <stdio.h>
#include <string.h>
int main()
{
    float height;

    printf("Enter your height in cm and Name\n");

    scanf("%f", &height);

    printf("%s, your height is %.2f metres", height / 100);

    return 0;
}