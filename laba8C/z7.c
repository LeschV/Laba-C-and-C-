#include <stdio.h>

int stepen(int base, int num)
{
    if (num > 1)
    {
        return base * stepen(base, num - 1);
    }
    else
    {
        return base;
    }
}

int main()
{
    printf("Input your num and base:");
    int base, num;
    scanf("%d", &base);
    scanf("%d", &num);
    printf("Stepeeeeeen = %d ", stepen(base, num));
    return 0;
}