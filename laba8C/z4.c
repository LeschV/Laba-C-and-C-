#include <stdio.h>
#include <string.h>

char Perevertush(char *stroka)
{
    if (*stroka)
    {
        Perevertush(stroka + 1);
        printf("%c", *stroka);
    }
}

int main()
{
    char stroka[100];
    printf("Input string data (<= 100 symbols):\n");
    scanf("%s", &stroka);
    int length = strlen(stroka);
    printf("%s", Perevertush(stroka));
    return 0;
}