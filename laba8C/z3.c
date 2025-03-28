#include <stdio.h>

int sum_cifr(int num)
{
    if (num >= 10)
    {
        return num % 10 + sum_cifr(num / 10);
    }
    else
    {
        return num;
    }
}
int main()
{
    printf("Input your num:");
    int num;
    scanf("%d", &num);
    printf("%d ", sum_cifr(num));

    return 0;
}