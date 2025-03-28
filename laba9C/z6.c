#include <stdio.h>
typedef struct Operation
{
    int (*sum)(int x, int y);
    int (*multiply)(int x, int y);
} Operation;

int sum(int x, int y)
{
    return x + y;
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{

    Operation OPERATION;
    OPERATION.sum = &sum;
    OPERATION.multiply = &multiply;
    printf("Input 2 nums:");
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("What operation do you wanna choose?(1 - sum; 2 - mul)\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("%d ", OPERATION.sum(x, y));
        break;
    case 2:
        printf("%d", OPERATION.multiply(x, y));
        break;

    default:
        break;
    }

    return 0;
}