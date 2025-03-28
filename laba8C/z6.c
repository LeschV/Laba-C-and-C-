#include <stdio.h>
#include <string.h>

int Palindrom(char *stroka, int length)
{
    if (length <= 1)
    {
        return 1;
    }
    if (stroka[0] != stroka[length - 1])
    {
        return 0;
    }
    return Palindrom(stroka + 1, length - 2);
}

int main()
{
    char stroka[100];
    printf("Input string data (<= 100 symbols):\n");
    scanf("%s", &stroka);
    int length = strlen(stroka);
    if (Palindrom(stroka, length))
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }
    return 0;
}