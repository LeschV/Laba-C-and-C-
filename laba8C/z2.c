#include <stdio.h>
int Fibbonachi(int index)
{
    int fib_index;
    if (index <= 2)
    {
        return 1;
    }
    else
    {
        fib_index = Fibbonachi(index - 1) + Fibbonachi(index - 2);
    }
    return fib_index;
}

int main()
{
    printf("Input index num of Fibbonachi:");
    int index;
    scanf("%d", &index);
    printf("Fibbonachi num with index %d = %d ", index, Fibbonachi(index));
    return 0;
}