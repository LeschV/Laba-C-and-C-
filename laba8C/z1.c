#include <stdio.h>
unsigned int factorial(int n)
{
    int fact = 1;
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
    return fact;
}
int main()
{
    printf("Input a num (..!): ");
    int num;
    scanf("%d", &num);
    printf("%d", factorial(num));

    return 0;
}