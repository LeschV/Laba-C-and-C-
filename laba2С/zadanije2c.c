#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    printf("What is your name?\n");
    char n[10];
    scanf("%s", n);
    printf("\"%s\"\n\n", n);
    printf("\"%-20s\"\n\n", n);
    printf("\"%20s\"\n\n", n);
    i = strlen(n) + 3;
    printf("\"%*s\"", i, n);
    return 0;
}