#include <stdio.h>
int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int main()
{
    int a, b;
    printf("input a , b:\n");
    scanf("%d %d", &a, &b);
    printf("sum = %d", sum(a, b));
    return 0;
}