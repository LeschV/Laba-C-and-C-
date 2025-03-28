#include <stdio.h>

int digit_counter(int num)
{
    int counter = 1;
    if ((num / 10) > 0)
    {
        return counter + digit_counter(num / 10);
    }
}

int main()
{
    printf("Input your num:");
    int num;
    scanf("%d", &num);
    printf("Num of digits of your num = %d;\n", digit_counter(num));
    return 0;
}